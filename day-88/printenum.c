#include <stdio.h>
enum Light{RED,YELLOW,GREEN};
int main(){
    char *names[3]={"RED","YELLOW","GREEN"};
    for(int i=RED;i<=GREEN;i++){
        printf("%s=%d\n",names[i],i);
    }
    return 0;
}
