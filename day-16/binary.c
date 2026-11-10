#include <stdio.h>
int main(){
    int n,i=0;
    int bits[32];
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0){
        printf("0\n");
        return 0;
    }
    while(n>0){
        bits[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",bits[j]);
    }
    printf("\n");
    return 0;
}
