#include <stdio.h>
int main(){
    int n,pivot=-1;
    printf("Enter n: ");
    scanf("%d",&n);
    int total=n*(n+1)/2;
    for(int x=1;x<=n;x++){
        int left=x*(x+1)/2;
        int right=total-left+x;
        if(left==right){
            pivot=x;
            break;
        }
    }
    printf("%d\n",pivot);
    return 0;
}
