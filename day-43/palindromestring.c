#include <stdio.h>
int main(){
    char s[100];
    int len=0,isPal=1;
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    while(s[len]!='\0'){
        len++;
    }
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i]){
            isPal=0;
            break;
        }
    }
    if(isPal){
        printf("Palindrome\n");
    }
    else{
        printf("Not a palindrome\n");
    }
    return 0;
}
