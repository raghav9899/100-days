#include <stdio.h>
int main(){
    int r,c,a[10][10],symmetric=1;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter elements: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    if(r!=c){
        symmetric=0;
    }
    else{
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(a[i][j]!=a[j][i]){
                    symmetric=0;
                }
            }
        }
    }
    if(symmetric){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}
