#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("Enter a, b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0){
        printf("Not a quadratic equation\n");
        return 0;
    }
    float d=b*b-4*a*c;
    if(d>0){
        float r1=(-b+sqrt(d))/(2*a);
        float r2=(-b-sqrt(d))/(2*a);
        printf("Roots are real and different: %.2f, %.2f\n",r1,r2);
    }
    else if(d==0){
        printf("Roots are real and equal: %.2f\n",-b/(2*a));
    }
    else{
        float real=-b/(2*a);
        float imag=sqrt(-d)/(2*a);
        printf("Roots are imaginary: %.2f+%.2fi, %.2f-%.2fi\n",real,imag,real,imag);
    }
    return 0;
}
