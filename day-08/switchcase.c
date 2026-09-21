#include <stdio.h>
int main(){
    char ch;
    printf("Enter a single character: ");
    scanf("%c",&ch);
    switch(ch){
        case 'A'...'Z':
        printf("it is an uppercase");
        break;
        case 'a'...'z':
        printf("it is a lowercase");
        break;
        case '0'...'9':
        printf("it is a number");
        break;
        case '!'...'*':
        printf("it is a special char");
        break;
    }
}