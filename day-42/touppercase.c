#include <stdio.h>
int main(){
    char s[100];
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    printf("%s\n",s);
    return 0;
}
