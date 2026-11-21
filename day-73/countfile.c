#include <stdio.h>
int main(){
    int ch,last='\n';
    int chars=0,words=0,lines=0,inWord=0;
    FILE *fp=fopen("sample.txt","r");
    if(fp==NULL){
        printf("Error opening file\n");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF){
        if(ch=='\n'){
            lines++;
        }
        else{
            chars++;
        }
        if(ch==' ' || ch=='\n'){
            inWord=0;
        }
        else if(!inWord){
            inWord=1;
            words++;
        }
        last=ch;
    }
    if(last!='\n'){
        lines++;
    }
    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n",chars,words,lines);
    return 0;
}
