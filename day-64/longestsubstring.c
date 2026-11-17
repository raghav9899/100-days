#include <stdio.h>
int main(){
    char s[100];
    int max=0;
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    for(int i=0;s[i]!='\0';i++){
        int seen[256]={0};
        int len=0;
        for(int j=i;s[j]!='\0';j++){
            if(seen[(int)s[j]]) break;
            seen[(int)s[j]]=1;
            len++;
        }
        if(len>max) max=len;
    }
    printf("%d\n",max);
    return 0;
}
