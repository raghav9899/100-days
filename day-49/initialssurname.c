#include <stdio.h>
int main(){
    char name[100];
    int last=0;
    printf("Enter your name: ");
    scanf(" %[^\n]",name);
    for(int i=0;name[i]!='\0';i++){
        if(name[i]==' '){
            last=i+1;
        }
    }
    printf("%c.",name[0]);
    for(int i=1;i<last-1;i++){
        if(name[i-1]==' ' && name[i]!=' '){
            printf("%c.",name[i]);
        }
    }
    printf(" %s\n",name+last);
    return 0;
}
