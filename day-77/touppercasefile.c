#include <stdio.h>
int main(){
    int ch;
    FILE *in=fopen("input.txt","r");
    if(in==NULL){
        printf("Error opening input.txt\n");
        return 1;
    }
    FILE *out=fopen("output.txt","w");
    while((ch=fgetc(in))!=EOF){
        if(ch>='a' && ch<='z'){
            ch=ch-32;
        }
        fputc(ch,out);
    }
    fclose(in);
    fclose(out);
    printf("Converted text written to output.txt\n");
    return 0;
}
