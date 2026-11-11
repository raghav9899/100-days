#include <stdio.h>
int main(){
    int n,temp,p=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>=10){
        p*=10;
        temp/=10;
    }
    int first=n/p;
    int last=n%10;
    if(n<10){
        printf("%d\n",n);
    }
    else{
        printf("%d\n",last*p+(n%p)/10*10+first);
    }
    return 0;
}
