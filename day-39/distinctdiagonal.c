#include <stdio.h>
int main(){
    int n,m,a[10][10],distinct=1;
    printf("Enter rows and columns: ");
    scanf("%d %d",&n,&m);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i][i]==a[j][j]){
                distinct=0;
            }
        }
    }
    if(distinct){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}
