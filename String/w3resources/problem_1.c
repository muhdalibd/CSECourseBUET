#include <stdio.h>

int main(){
    /*
        Write a program in C to input a string and print it.
    */
    char str[50];
    // gets(str); //    (1)
    // puts(str);
    // scanf("%s", str); //    (2)
    // printf("%s", str);
    // scanf("%[^\n]s", str); //    (3)
    // puts(str);
    fgets(str, sizeof(str), stdin); //   (4)
    printf("%s", str);
    return 0;
}