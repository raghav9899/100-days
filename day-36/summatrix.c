#include <stdio.h>
int main(){
    int r,c,a[10][10],sum=0;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter elements: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    printf("%d\n",sum);
    return 0;
}
