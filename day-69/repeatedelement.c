#include <stdio.h>
int main(){
    int n,x,seen[1000]={0};
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(seen[x]){
            printf("%d\n",x);
            return 0;
        }
        seen[x]=1;
    }
    printf("No repeated element\n");
    return 0;
}
