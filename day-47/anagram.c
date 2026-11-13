#include <stdio.h>
int main(){
    char a[100],b[100];
    int count[256]={0},isAnagram=1;
    printf("Enter first string: ");
    scanf(" %[^\n]",a);
    printf("Enter second string: ");
    scanf(" %[^\n]",b);
    for(int i=0;a[i]!='\0';i++){
        count[(int)a[i]]++;
    }
    for(int i=0;b[i]!='\0';i++){
        count[(int)b[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            isAnagram=0;
        }
    }
    if(isAnagram){
        printf("Anagrams\n");
    }
    else{
        printf("Not anagrams\n");
    }
    return 0;
}
