#include <stdio.h>
int main(){
   int time,hours,minutes,seconds;
   printf("Enter the time in seconds: ");
   scanf("%d", &time);
   hours=time/3600;
   minutes=(time%3600)/60;
   seconds=(time%3600)%60; 
   printf("the time in hours, minutes and seconds is: %d hours, %d minutes and %d seconds\n",hours,minutes,seconds);
    return 0;
    }