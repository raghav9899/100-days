#include <stdio.h>
int main(){
    int n,temp,digits=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        digits++;
        temp/=10;
    }
    temp=n;
    while(temp>0){
        int d=temp%10;
        int power=1;
        for(int i=0;i<digits;i++){
            power*=d;
        }
        sum+=power;
        temp/=10;
    }
    if(sum==n){
        printf("Armstrong\n");
    }
    else{
        printf("Not an Armstrong number\n");
    }
    return 0;
}
