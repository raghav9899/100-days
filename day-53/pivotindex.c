#include <stdio.h>
int main(){
    int n,nums[100],total=0,left=0,pivot=-1;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
        total+=nums[i];
    }
    for(int i=0;i<n;i++){
        if(left==total-left-nums[i]){
            pivot=i;
            break;
        }
        left+=nums[i];
    }
    printf("%d\n",pivot);
    return 0;
}
