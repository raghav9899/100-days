#include <stdio.h>
int main(){
    int n,count[10]={0};
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        count[n%10]++;
        n/=10;
    }
    int maxDigit=0;
    for(int i=1;i<10;i++){
        if(count[i]>count[maxDigit]){
            maxDigit=i;
        }
    }
    printf("%d\n",maxDigit);
    return 0;
}
