#include <stdio.h>
#include <stdlib.h>
struct Student{
    char name[30];
    int roll_no;
    int marks;
};
int main(){
    struct Student *s=(struct Student*)malloc(sizeof(struct Student));
    if(s==NULL){
        printf("Memory not allocated\n");
        return 1;
    }
    printf("Enter name, roll and marks: ");
    scanf("%s %d %d",s->name,&s->roll_no,&s->marks);
    printf("Name: %s | Roll: %d | Marks: %d\n",s->name,s->roll_no,s->marks);
    free(s);
    return 0;
}
