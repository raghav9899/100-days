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
        int result=0;
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                result=arr[j];
                break;
            }
        }
        printf("%d ",result);
    }
    printf("\n");
    return 0;
}
