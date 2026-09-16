#include <stdio.h>
int main(){
    int length, width;
    printf("Enter the length and width of the rectangle: ");
    scanf("%d %d", &length , &width);
    int area=0;
    area=length*width;
    printf("the area of the rectangle is: %d\n",area);
    int perimeter=0;
    perimeter=2*(length+width);
    printf("the perimeter of the rectangle is: %d\n",perimeter);
    return 0;
}