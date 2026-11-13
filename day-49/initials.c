#include <stdio.h>
int main(){
    char name[100];
    printf("Enter your name: ");
    scanf(" %[^\n]",name);
    printf("%c.",name[0]);
    for(int i=1;name[i]!='\0';i++){
        if(name[i-1]==' ' && name[i]!=' '){
            printf("%c.",name[i]);
        }
    }
    printf("\n");
    return 0;
}
