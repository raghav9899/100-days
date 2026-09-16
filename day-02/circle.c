#include <stdio.h>
int main(){
    int area, circumference, radius;
    printf("Enter the radius of the circcle: ");
    scanf("%d", &radius);
    area=3.14*radius*radius;
    printf("the area of the circle is: %d\n",area);
    circumference=2*3.14*radius;
    printf("the circumference of the circle is: %d\n",circumference);
    return 0;
}