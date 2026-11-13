#include <stdio.h>
int main(){
    int n,m,a[50],b[50],c[100];
    printf("Enter size of first array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("Enter size of second array: ");
    scanf("%d",&m);
    printf("Enter elements: ");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
        c[n+i]=b[i];
    }
    for(int i=0;i<n+m;i++){
        printf("%d ",c[i]);
    }
    printf("\n");
    return 0;
}
