#include <stdio.h>
int main(){
    int n,nums[100],target,first=-1,last=-1;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter target: ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            if(first==-1) first=i;
            last=i;
        }
    }
    printf("%d,%d\n",first,last);
    return 0;
}
