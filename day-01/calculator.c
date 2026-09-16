#include <stdio.h>
int main(){
int a, b;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
int sum=0;
sum=a+b;
printf("the sum is: %d\n",sum);
int difference=0;
difference=a-b;
printf("the difference is: %d\n",difference);
int product=0;
product=a*b;
printf("the product is: %d\n",product);
int quotient=0;
if(b!=0){
    quotient=a/b;
    printf("the quotient is: %d\n",quotient);
}
return 0;
}
