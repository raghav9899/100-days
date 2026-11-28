#include <stdio.h>
struct Student{
    char name[30];
    int roll_no;
    int marks;
};
int main(){
    struct Student s={"Tom",100,50};
    struct Student *p=&s;
    printf("Enter new name, roll and marks: ");
    scanf("%s %d %d",p->name,&p->roll_no,&p->marks);
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",p->name,p->roll_no,p->marks);
    return 0;
}
