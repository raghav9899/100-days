#include <stdio.h>
int main(){
    char a[100],b[100];
    int n=0,m=0,isRotation=0;
    printf("Enter first string: ");
    scanf(" %[^\n]",a);
    printf("Enter second string: ");
    scanf(" %[^\n]",b);
    while(a[n]!='\0') n++;
    while(b[m]!='\0') m++;
    if(n==m){
        for(int shift=0;shift<n;shift++){
            int same=1;
            for(int i=0;i<n;i++){
                if(a[(i+shift)%n]!=b[i]){
                    same=0;
                    break;
                }
            }
            if(same){
                isRotation=1;
                break;
            }
        }
    }
    if(isRotation){
        printf("Rotation\n");
    }
    else{
        printf("Not a rotation\n");
    }
    return 0;
}
