#include <stdio.h>
int main(){
    int n,m,a[10][10],sum=0;
    printf("Enter rows and columns: ");
    scanf("%d %d",&n,&m);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        sum+=a[i][i];
    }
    printf("%d\n",sum);
    return 0;
}
