#include <stdio.h>
int main(){
    char filename[50];
    int ch;
    printf("Enter file name: ");
    scanf("%s",filename);
    FILE *fp=fopen(filename,"r");
    if(fp==NULL){
        printf("Error: file does not exist\n");
        return 1;
    }
    printf("File opened successfully.\n");
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
