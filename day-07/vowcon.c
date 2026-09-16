#include <stdio.h>
int main(){
    char vowel,consonant;
    printf("enter a character: ");
    scanf("%c %c",&vowel,&consonant);
    if(vowel=="a","e","i","o","u"){
        printf("%c is a vowel\n",vowel);
    }
    else{
        printf("%c is a consonant\n",consonant);
    }
return 0;
}