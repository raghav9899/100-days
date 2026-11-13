#include <stdio.h>
int main(){
    char s[100];
    int v=0,c=0;
    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    for(int i=0;s[i]!='\0';i++){
        char ch=s[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                v++;
            }
            else{
                c++;
            }
        }
    }
    printf("Vowels=%d, Consonants=%d\n",v,c);
    return 0;
}
