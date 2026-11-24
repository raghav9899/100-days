#include <stdio.h>
enum Menu{ADD,SUBTRACT,MULTIPLY};
int main(){
    int choice,a,b;
    printf("Enter choice (0=ADD, 1=SUBTRACT, 2=MULTIPLY) and two numbers: ");
    scanf("%d %d %d",&choice,&a,&b);
    enum Menu m=choice;
    switch(m){
        case ADD: printf("%d\n",a+b); break;
        case SUBTRACT: printf("%d\n",a-b); break;
        case MULTIPLY: printf("%d\n",a*b); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
