#include <stdio.h>
enum Status{SUCCESS,FAILURE,TIMEOUT};
int main(){
    int a=SUCCESS,b=FAILURE,c=TIMEOUT;
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n",a,b,c);
    return 0;
}
