#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    gets(str);

    int i = 0, j = strlen(str) - 1;

    while(i <= j){
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++; j --;
    }
    
    puts(str);
    return 0;
}