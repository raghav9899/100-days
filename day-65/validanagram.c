#include <stdio.h>
int main(){
    char s[100],t[100];
    int count[26]={0},valid=1;
    printf("Enter first string: ");
    scanf("%s",s);
    printf("Enter second string: ");
    scanf("%s",t);
    for(int i=0;s[i]!='\0';i++){
        count[s[i]-'a']++;
    }
    for(int i=0;t[i]!='\0';i++){
        count[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0) valid=0;
    }
    if(valid){
        printf("Anagram\n");
    }
    else{
        printf("Not Anagram\n");
    }
    return 0;
}
