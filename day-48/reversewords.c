#include <stdio.h>
int main(){
    char s[200];
    int start=0;
    printf("Enter a sentence: ");
    scanf(" %[^\n]",s);
    for(int i=0;;i++){
        if(s[i]==' ' || s[i]=='\0'){
            for(int j=i-1;j>=start;j--){
                printf("%c",s[j]);
            }
            if(s[i]=='\0') break;
            printf(" ");
            start=i+1;
        }
    }
    printf("\n");
    return 0;
}
