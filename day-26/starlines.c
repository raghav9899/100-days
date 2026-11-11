#include <stdio.h>
int main(){
    int groups[5]={1,3,5,3,1};
    for(int i=0;i<5;i++){
        for(int j=0;j<groups[i];j++){
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}
