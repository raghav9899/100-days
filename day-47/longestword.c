#include <stdio.h>
int main(){
    char s[200];
    int len=0,maxLen=0,start=0,maxStart=0;
    printf("Enter a sentence: ");
    scanf(" %[^\n]",s);
    for(int i=0;;i++){
        if(s[i]==' ' || s[i]=='\0'){
            if(len>maxLen){
                maxLen=len;
                maxStart=start;
            }
            len=0;
            start=i+1;
            if(s[i]=='\0') break;
        }
        else{
            len++;
        }
    }
    for(int i=maxStart;i<maxStart+maxLen;i++){
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
