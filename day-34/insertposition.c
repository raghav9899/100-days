#include <stdio.h>
int main(){
    int n,arr[100],pos,x;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position (from 0) and element: ");
    scanf("%d %d",&pos,&x);
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=x;
    n++;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
