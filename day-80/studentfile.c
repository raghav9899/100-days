#include <stdio.h>
int main(){
    int n,roll,marks;
    char name[30];
    printf("Enter number of students: ");
    scanf("%d",&n);
    FILE *fp=fopen("students.txt","w");
    for(int i=0;i<n;i++){
        printf("Enter name, roll and marks of student %d: ",i+1);
        scanf("%s %d %d",name,&roll,&marks);
        fprintf(fp,"%s %d %d\n",name,roll,marks);
    }
    fclose(fp);
    fp=fopen("students.txt","r");
    while(fscanf(fp,"%s %d %d",name,&roll,&marks)==3){
        printf("Name: %s | Roll: %d | Marks: %d\n",name,roll,marks);
    }
    fclose(fp);
    return 0;
}
