#include <stdio.h>
int main(){
    int n,arr[100],k;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter k: ");
    scanf("%d",&k);
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int max=sum;
    for(int i=k;i<n;i++){
        sum=sum+arr[i]-arr[i-k];
        if(sum>max) max=sum;
    }
    printf("%d\n",max);
    return 0;
}
