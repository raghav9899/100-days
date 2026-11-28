#include <stdio.h>
struct Date{
    int day;
    int month;
    int year;
};
struct Employee{
    char name[30];
    int id;
    struct Date joining;
};
int main(){
    struct Employee e;
    printf("Enter name: ");
    scanf("%s",e.name);
    printf("Enter ID: ");
    scanf("%d",&e.id);
    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d",&e.joining.day,&e.joining.month,&e.joining.year);
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",e.name,e.id,e.joining.day,e.joining.month,e.joining.year);
    return 0;
}
