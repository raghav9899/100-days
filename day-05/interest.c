#include <stdio.h>
int main(){
    float p,r,t;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f",&p,&r,&t);
    float si=p*r*t/100;
    float amount=p;
    for(int i=1;i<=t;i++){
        amount=amount*(1+r/100);
    }
    float ci=amount-p;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n",si,ci);
    return 0;
}
