#include <stdio.h>
/*
    A string in C is an array of characters terminated by a null character '\0'.
    • The null character '\0' marks the end of the string.
    • C does not have a built-in string data type.
    • Strings are implemented using arrays of char.
    • Strings hold  1 extra value for the delimiter '\0'
*/

int main(){
    // Referring to String Literals
    // printf("%c", "hello"[1]);   // e
    /*
    • String literal is an array, can refer to a
    single character from the literal as a character.
    */

    /*
    String Variables
    // declaring and initializing a string
    */
    // char str1[6] = "Hello";
    // char str2[ ] = "Hello";
    // char str3[20] = "Hello";
    // char *str4 = "Hello";
    // char str5[6] = {'H','e','l','l','o','\0'};


    /*
    • Duplicate String Literals
    str1 = str2; // not allowed
    char str1[6] = "hello";
    char str2[6] = "hello";
    But str1 does not equal str2 (they are stored at different locations)
    if(str1 == str2) ... is FALSE
    */

    /*
    Changing content of String Variables
    • Can change parts of a string variable
    char str1[6] = "hello";
    str1[0] = 'y';  // "yello"
    str1[4] = '\0'; // "yell"
    */

    /*
    String Input
    */
    char Name[11];
    scanf("%s", Name);  // reads characters until next white space encountered
    // scanf("%10s",Name);
    printf("%s\n", Name);
    printf("%10s\n", Name);
    printf("%-10s\n", Name);
    return 0;
}