#include <stdio.h>
int main(){
    int n,arr[100],x,index=-1;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter x: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]>=x){
            index=i;
            break;
        }
    }
    printf("%d\n",index);
    return 0;
}
