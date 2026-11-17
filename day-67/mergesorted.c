#include <stdio.h>
int main(){
    int m,n,a[50],b[50],c[100];
    printf("Enter size of first array: ");
    scanf("%d",&m);
    printf("Enter sorted elements: ");
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n);
    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<=b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<m) c[k++]=a[i++];
    while(j<n) c[k++]=b[j++];
    for(int x=0;x<k;x++){
        printf("%d ",c[x]);
    }
    printf("\n");
    return 0;
}
