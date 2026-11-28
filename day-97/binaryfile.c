#include <stdio.h>
struct Employee{
    char name[30];
    int id;
    float salary;
};
int main(){
    struct Employee e,r;
    printf("Enter name, ID and salary: ");
    scanf("%s %d %f",e.name,&e.id,&e.salary);
    FILE *fp=fopen("employee.dat","wb");
    if(fp==NULL){
        printf("Error opening file\n");
        return 1;
    }
    fwrite(&e,sizeof(struct Employee),1,fp);
    fclose(fp);
    fp=fopen("employee.dat","rb");
    fread(&r,sizeof(struct Employee),1,fp);
    fclose(fp);
    printf("Name: %s | ID: %d | Salary: %.2f\n",r.name,r.id,r.salary);
    return 0;
}
