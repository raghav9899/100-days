#include <stdio.h>
int main(){
    int n,product=1,found=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        int d=n%10;
        if(d%2!=0){
            product*=d;
            found=1;
        }
        n/=10;
    }
    if(found){
        printf("%d\n",product);
    }
    else{
        printf("No odd digits\n");
    }
    return 0;
}
