#include <stdio.h>
int main(){
    int n,nums[100],result=-1;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(nums[j]==nums[i]) count++;
        }
        if(count>n/2){
            result=nums[i];
            break;
        }
    }
    printf("%d\n",result);
    return 0;
}
