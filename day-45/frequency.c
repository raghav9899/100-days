#include <stdio.h>
int main(){
    char s[100],ch;
    int count=0;
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    printf("Enter a character: ");
    scanf(" %c",&ch);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==ch){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
