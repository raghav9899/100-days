#include <stdio.h>
int main(){
    int d,m,y;
    char *months[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d,&m,&y);
    if(m<1 || m>12){
        printf("Invalid date\n");
        return 0;
    }
    printf("%02d-%s-%d\n",d,months[m-1],y);
    return 0;
}
