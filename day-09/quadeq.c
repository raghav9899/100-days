#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    printf("enter the three numbers: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    double x=0,d=0,x1=0;
    d=b*b-4*a*c;
    x=(-b+sqrt(d))/2*a;
    x1=(-b-sqrt(d))/(2*a);
    printf("ur answer is: %lf",x);
    printf("ur answer is: %lf",x1);
    return 0;
}
