#include <stdio.h>
int main(){
    int x,sum=0,count=0;
    FILE *fp=fopen("numbers.txt","r");
    if(fp==NULL){
        printf("Error opening file\n");
        return 1;
    }
    while(fscanf(fp,"%d",&x)==1){
        sum+=x;
        count++;
    }
    fclose(fp);
    if(count==0){
        printf("File is empty\n");
        return 0;
    }
    printf("Sum = %d\nAverage = %.2f\n",sum,(float)sum/count);
    return 0;
}
