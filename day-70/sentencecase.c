#include <stdio.h>
int main(){
    char s[200];
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    for(int i=0;s[i]!='\0';i++){
        if(i==0 || s[i-1]==' '){
            if(s[i]>='a' && s[i]<='z') s[i]=s[i]-32;
        }
        else{
            if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
        }
    }
    printf("%s\n",s);
    return 0;
}
