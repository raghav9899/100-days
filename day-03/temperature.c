#include <stdio.h>
int main(){
    int celsius, fahrenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%d", &celsius);
    printf("Enter the temperature in fahrenheit: ");
    scanf("%d", &fahrenheit);
    fahrenheit=celsius*9/5+32;
    printf("the temperature in fahrenheit is: %d\n",fahrenheit);
    return 0; 
}