#include <stdio.h>
int main(){
    int n,arr[100];
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int prev=-1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                prev=arr[j];
                break;
            }
        }
        if(i>0) printf(", ");
        printf("%d",prev);
    }
    printf("\n");
    return 0;
}
