#include <stdio.h>
enum Status{SUCCESS,FAILURE,TIMEOUT};
int main(){
    int choice;
    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d",&choice);
    enum Status s=choice;
    switch(s){
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
        default: printf("Invalid status\n");
    }
    return 0;
}
