#include <stdio.h>
int main(){
    char s[100];
    int count=0;
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    while(s[count]!='\0'){
        count++;
    }
    printf("%d\n",count);
    return 0;
}
