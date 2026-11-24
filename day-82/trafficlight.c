#include <stdio.h>
enum Light{RED,YELLOW,GREEN};
int main(){
    int choice;
    printf("Enter light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d",&choice);
    enum Light light=choice;
    if(light==RED){
        printf("Stop\n");
    }
    else if(light==YELLOW){
        printf("Wait\n");
    }
    else if(light==GREEN){
        printf("Go\n");
    }
    else{
        printf("Invalid light\n");
    }
    return 0;
}
