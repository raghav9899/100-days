#include <stdio.h>
int main(){
    char s[100];
    int found=0;
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    for(int i=0;s[i]!='\0' && !found;i++){
        if(s[i]>='a' && s[i]<='z'){
            for(int j=i+1;s[j]!='\0';j++){
                if(s[i]==s[j]){
                    printf("%c\n",s[i]);
                    found=1;
                    break;
                }
            }
        }
    }
    if(!found){
        printf("No repeating alphabet\n");
    }
    return 0;
}
