#include <stdio.h>
int main(){
    char s[100];
    int spaces=0,digits=0,special=0;
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    for(int i=0;s[i]!='\0';i++){
        char ch=s[i];
        if(ch==' '){
            spaces++;
        }
        else if(ch>='0' && ch<='9'){
            digits++;
        }
        else if(!((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))){
            special++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n",spaces,digits,special);
    return 0;
}
