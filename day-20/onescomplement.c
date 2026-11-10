#include <stdio.h>
int main(){
    char bin[33];
    printf("Enter a binary number: ");
    scanf("%s",bin);
    for(int i=0;bin[i]!='\0';i++){
        if(bin[i]=='0'){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
    return 0;
}
