#include <stdio.h>
int main(){
    int r,c,a[10][10],rowSum[10];
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter elements: ");
    for(int i=0;i<r;i++){
        rowSum[i]=0;
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            rowSum[i]+=a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        printf("%d ",rowSum[i]);
    }
    printf("\n");
    return 0;
}
