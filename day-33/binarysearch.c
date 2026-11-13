#include <stdio.h>
int main(){
    int n,arr[100],key;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&key);
    int low=0,high=n-1,found=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            found=mid;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==-1){
        printf("Not found\n");
    }
    else{
        printf("Found at index %d\n",found);
    }
    return 0;
}
