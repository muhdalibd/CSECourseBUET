#include <stdio.h>

int main(){
    /*
        Write a program in C to separate individual characters from a string.
    */
    char str[50];
    gets(str);
    
    int i=0;
    while(str[i] != '\0'){
        printf("%c ", str[i++]);
    }
    return 0;
}