#include <stdio.h>
int main(){
    int n;
    float sum=1;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        sum+=(2.0*i-1)/(2*i);
    }
    printf("Approximate sum: %.2f\n",sum);
    return 0;
}
