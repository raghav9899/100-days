#include <stdio.h>
struct Student{
    char name[30];
    int roll_no;
    int marks;
};
int main(){
    int n;
    struct Student s[50];
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter name, roll and marks of student %d: ",i+1);
        scanf("%s %d %d",s[i].name,&s[i].roll_no,&s[i].marks);
    }
    int top=0;
    for(int i=1;i<n;i++){
        if(s[i].marks>s[top].marks){
            top=i;
        }
    }
    printf("Topper: %s (Marks: %d)\n",s[top].name,s[top].marks);
    return 0;
}
