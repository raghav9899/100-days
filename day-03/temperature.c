#include <stdio.h>
int main(){
    float celsius;
    printf("Enter temperature in celsius: ");
    scanf("%f",&celsius);
    float fahrenheit=celsius*9/5+32;
    printf("Fahrenheit=%.1f\n",fahrenheit);
    return 0;
}
