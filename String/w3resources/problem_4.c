#include <stdio.h>
#include <string.h>

int main(){
    /*
        C program to print individual characters of a string in reverse order.
    */
    char str[50];
    gets(str);

    int i=0;
    int j = strlen(str)-1;
    while(i<=j){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
    puts(str);
    return 0;
}