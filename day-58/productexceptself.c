#include <stdio.h>
int main(){
    int n,nums[100],answer[100];
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int prefix=1;
    for(int i=0;i<n;i++){
        answer[i]=prefix;
        prefix*=nums[i];
    }
    int suffix=1;
    for(int i=n-1;i>=0;i--){
        answer[i]*=suffix;
        suffix*=nums[i];
    }
    printf("[");
    for(int i=0;i<n;i++){
        if(i>0) printf(",");
        printf("%d",answer[i]);
    }
    printf("]\n");
    return 0;
}
