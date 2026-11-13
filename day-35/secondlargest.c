#include <stdio.h>
int main(){
    int n,arr[100];
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first=arr[0],second=-2147483647-1,found=0;
    for(int i=1;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
            found=1;
        }
        else if(arr[i]<first && (!found || arr[i]>second)){
            second=arr[i];
            found=1;
        }
    }
    if(found){
        printf("%d\n",second);
    }
    else{
        printf("No second largest element\n");
    }
    return 0;
}
