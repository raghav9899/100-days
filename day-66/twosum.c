#include <stdio.h>
int main(){
    int n,nums[100],target,found=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter target: ");
    scanf("%d",&target);
    for(int i=0;i<n && !found;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                printf("%d %d\n",i,j);
                found=1;
                break;
            }
        }
    }
    if(!found){
        printf("-1 -1\n");
    }
    return 0;
}
