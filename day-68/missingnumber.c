#include <stdio.h>
int main(){
    int n,nums[100],sum=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
        sum+=nums[i];
    }
    printf("%d\n",n*(n+1)/2-sum);
    return 0;
}
