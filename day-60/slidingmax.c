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
    for(int i=0;i<=n-k;i++){
        int max=arr[i];
        for(int j=i+1;j<i+k;j++){
            if(arr[j]>max) max=arr[j];
        }
        printf("%d ",max);
    }
    printf("\n");
    return 0;
}
