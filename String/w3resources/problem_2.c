#include <stdio.h>

int main(){
    /*
        C program to find the length of a string without using library functions.
    */
    char str[50];
    gets(str);

    int i=0;
    while(str[i] != '\0'){
        i++;
    }

    printf("Length of string is %d", i+1);
    return 0;
}