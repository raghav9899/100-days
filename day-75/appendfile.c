#include <stdio.h>
int main(){
    char text[200];
    FILE *fp=fopen("data.txt","a");
    if(fp==NULL){
        printf("Error opening file\n");
        return 1;
    }
    printf("Enter text to append: ");
    scanf(" %[^\n]",text);
    fprintf(fp,"%s\n",text);
    fclose(fp);
    printf("File updated successfully with appended text.\n");
    return 0;
}
