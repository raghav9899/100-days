#include <stdio.h>
struct Student{
    char name[30];
    int roll_no;
    int marks;
};
void display(struct Student s){
    printf("Name: %s | Roll: %d | Marks: %d\n",s.name,s.roll_no,s.marks);
}
int main(){
    struct Student s;
    printf("Enter name, roll and marks: ");
    scanf("%s %d %d",s.name,&s.roll_no,&s.marks);
    display(s);
    return 0;
}
