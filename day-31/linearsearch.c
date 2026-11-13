#include <stdio.h>
int main(){
    int n,arr[100],key,found=-1;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            found=i;
            break;
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
