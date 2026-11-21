#include <stdio.h>
int main(){
    int ch,v=0,c=0;
    FILE *fp=fopen("text.txt","r");
    if(fp==NULL){
        printf("Error opening file\n");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                v++;
            }
            else{
                c++;
            }
        }
    }
    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n",v,c);
    return 0;
}
