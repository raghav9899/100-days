#include <stdio.h>
int main(){
 char ch;
 printf("Enter a single character: ");
 scanf("%c",&ch);
 if (ch>='A'&& ch<='Z')
    {printf("It is an uppercase character\n");
    }
else if(ch >='a'&& ch<='z'){
    printf("it is a lowecase\n");
}
else if(ch>='0'&&ch<='9'){
    printf("it is a number\n");
}
else{
    printf("it is a special character\n");
}
return 0;
}