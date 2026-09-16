#include <stdio.h>
int main(){
    int principal, rate, time;
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("enter the rate of interest: ");
    scanf("%d", &rate);
    printf("enter the time in years: ");
    scanf("%d", &time);
    int interest=0;
    interest=(principal*rate*time)/100;
    printf("the simple interest is: %d\n",interest);
    return 0;
}