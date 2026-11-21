#include <stdio.h>
int main(){
    char source[50],destination[50];
    int ch;
    printf("Enter source file name: ");
    scanf("%s",source);
    printf("Enter destination file name: ");
    scanf("%s",destination);
    FILE *fs=fopen(source,"r");
    if(fs==NULL){
        printf("Error opening source file\n");
        return 1;
    }
    FILE *fd=fopen(destination,"w");
    if(fd==NULL){
        printf("Error opening destination file\n");
        fclose(fs);
        return 1;
    }
    while((ch=fgetc(fs))!=EOF){
        fputc(ch,fd);
    }
    fclose(fs);
    fclose(fd);
    printf("File copied successfully to %s\n",destination);
    return 0;
}
