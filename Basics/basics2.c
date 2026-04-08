/*
    Basic Input and Output in C
    In C programming, the most commonly used input and output functions are 
    scanf() and printf(), which are included in the <stdio.h> library. 
    scanf() is used to take input from the user via the keyboard, while 
    printf() is used to display output on the screen.
*/

#include <stdio.h>

// Basic Output in C

// int main(){
//     // // Printing Some Text
//     // printf("I Love Coding!\n");
//     // // \n	New Line	It moves the cursor to the start of the next line.
//     // printf("Welcome to Coding!\n");

//     // // Printing Variables
//     // int age = 21;
//     // printf("%d\n", age);
//     // // Printing Variables Along with String
//     // printf("I am %d years old.\n", age);

//     // Output in String
//     printf("Hello, everyone!\n");
//     puts("I am a Student.");    //  automatically add newline
//     fputs("I am learning C.\n", stdout);  //  doesn't add newline

//     char str[30] = "Hello, World!";
//     printf("%s\n", str);
//     puts(str);      //  automatically add newline
//     fputs(str, stdout); //  doesn't add newline

//     return 0;
// }



// Basic Input in C
    // scanf("formatted_string", address_of_variables/values);

int main(){
    // Reading User Intput
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);

    // printf("You are %d", age);


    // Reading a string
    char str[50];
    printf("Enter a string: ");
    // scanf("%s", str);        // Cannot read strings with spaces
    // scanf("%[^\n]%*c", str);
    // scanf("%[^\n]s", str);
    // gets(str);   // ⚠️ DANGEROUS - Never use! => No bounds checking - can cause buffer overflow
    // fgets(str, 50, stdin);   // ✅ SAFE - Recommended

    // printf("%s", str);
    // puts(str);
    fputs(str, stdout);

    return 0;
}

/*
    Explanation : 
    Here, [] is the scanset character. ^\n tells to take input until newline doesn't 
    get encountered. Then, with this %*c, it reads newline character and here used
    * indicates that this newline character is discarded.


    Explanation : 
    Here, [] is the scanset character. ^\n tells to take input until newline doesn't
    get encountered. Here we used ^ (XOR -Operator ) which gives true until both 
    characters are different. Once the character is equal to New-line ('\n'),  
    ^ (XOR Operator ) gives false to read the string. So we use "%[^\n]s" instead
    of "%s". So to get a line of input with space we can go with scanf("%[^\n]s",str);
*/