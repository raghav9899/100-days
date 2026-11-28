#include <stdio.h>
#include <string.h>
struct Student{
    char name[30];
    int roll_no;
    int marks;
};
int main(){
    struct Student a,b;
    printf("Enter name, roll and marks of student 1: ");
    scanf("%s %d %d",a.name,&a.roll_no,&a.marks);
    printf("Enter name, roll and marks of student 2: ");
    scanf("%s %d %d",b.name,&b.roll_no,&b.marks);
    if(strcmp(a.name,b.name)==0 && a.roll_no==b.roll_no && a.marks==b.marks){
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }
    return 0;
}
