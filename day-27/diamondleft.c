#include <stdio.h>
int main(){
    for(int i=1;i<=9;i++){
        int stars=(i<=5)?2*i-1:2*(10-i)-1;
        for(int j=0;j<stars;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
