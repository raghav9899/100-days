#include <stdio.h>
int main(){
    char s[100];
    int len=0;
    printf("Enter a string: ");
    scanf("%s",s);
    while(s[len]!='\0'){
        len++;
    }
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            for(int k=i;k<=j;k++){
                printf("%c",s[k]);
            }
            if(!(i==len-1 && j==len-1)){
                printf(",");
            }
        }
    }
    printf("\n");
    return 0;
}
