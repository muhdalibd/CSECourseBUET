#include <stdio.h>
#include <string.h>

int main(){
    /********************************************************
        String in C Programming <--> College Wallah
    *******************************************************/
    // char ch = 'A';   // single quotation (Character)
    // char ch = "A";  // doube quotation (String) => error
    // char ch = 'ab'; // more than one (String) => error
    // printf("%c", ch);

    // char ch = 'A';  // Z = 90, a = 97, z = 122, 0 = 48, 9 = 57
    // printf("%c\n", ch); // A
    // printf("%d\n", ch); // 65 (ASCII value of 'A')
    // int assci = (int)ch; // Typecasting
    // printf("%d\n", assci); // 65
    // printf("%d\n", (int)ch); // 65


    /********************************************************
        Array of Character (String in C) =>
    *******************************************************/

    // char arr[] = {'a', 't', 'l', 'a', 's'};
    // printf("%c", arr[3]);

    // int arr[4] = {1,2,3,4};  // Integer takes 4 bytes
    // printf("%p\n", &arr[0]);    // 0061FF10
    // printf("%p\n", &arr[1]);    // 0061FF14
    // printf("%p\n", &arr[2]);    // 0061FF18
    // printf("%p\n", &arr[3]);    // 0061FF1C
    
    // char arr[4] = {'a','t','l','a'}; // Character takes 1 byte
    // printf("%p\n", &arr[0]);    // 0061FF1C
    // printf("%p\n", &arr[1]);    // 0061FF1D
    // printf("%p\n", &arr[2]);    // 0061FF1E
    // printf("%p\n", &arr[3]);    // 0061FF1F

    // char arr[11] = {'H','e','l','l','o', ' ', 'W','o','r','l','d'};
    // for(int i=0; i<11; i++){
    //     printf("%c", arr[i]); // Hello World
    // }

    // char ch = '\0'; // null character
    // printf("%c\n", ch); // output nothing 
    // printf("%d\n", ch);
    // printf("%d\n", (int)ch);  // ASCII value ZERO

    // int ch = 0; // 0 store as Integer
    // char x = (char) ch; // x --> '\0' (think ASCII)
    // printf("%c\n", x);    // output nothing 

//  How useful the NULL Character is! =>
    // char user[] = {'M','o','h','a','m','m','a','d',' ','A','l','i',' ','H','a','s','a','n'};   // undefined behavior (possible infinite loop or garbage output)
    // char user[] = {'M','o','h','a','m','m','a','d',' ','A','l','i',' ','H','a','s','a','n', '\0'};   // '\0' doesn't add by default
    // int i = 0;
    // while(user[i] != '\0'){
    //     printf("%c", user[i]);
    //     i ++;
    // }


    /********************************************************
        Better Process of Initializung a String in C:
    *******************************************************/
    
    
    // char str[] = "Hello, Ramadaan Mubarak\0";
    // char str[] = "Hello, Ramadaan Mubarak"; // '\0' add by default
    // int i = 0;
    // while(str[i] != '\0'){
    //     // printf("%c", str[i]);
    //     // printf("%c", i[str]);
    //     // printf("%c", *(str + i));
    //     // printf("%c", *(i + str));
    //     i ++;
    // }
    // printf("%s", str);

    // char str[] = "PhysicsWallah";  // Size 14 including '\0'
    // char str[13] = "PhysicsWallah";  // (Less Size) => Error (garbage output)
    // char str[50] = "PhysicsWallah";  // Right  =>  array size 50 but str end by '\0', so str size required = 14 (words = 13 + '\0')
    // printf("%s\n", str);
    // int arrSize = sizeof(str);
    // int require = strlen(str) + 1;
    // int strSize = strlen(str);
    // printf("%d\n",arrSize);     //  50
    // printf("%d\n",require);     //  14
    // printf("%d\n",strSize);     //  13

    // Accessing the Character presents in the String:
    // char str[] = "Physics Wallah";
    // printf("%c\n", str[2]);
    // printf("%c\n", str[7]);
    // printf("%c\n", str[8]);
    // printf("%c\n", str[13]);    // h
    // printf("%c\n", str[14]);    // nothing for '\0'
    // printf("%c\n", str[15]);    // garbage output

    // char str[] = "Physics Wallah";
    // str[0] = 'M';    // Mhysics Wallah   P --> M
    // str[1] = 97;    // Paysics Wallah   h --> a (97)
    // str[3] = 65;    // PayAics Wallah   s --> A (65)
    // printf("%s", str);


    /********************************************************
        Input & Output of String without LOOP
    *******************************************************/

    // char str[] = "Allah is Almighty";
    // printf("%s\n", str);
    // puts(str);  // Automatically gives \n (New Lines)
    // puts("Hello, Everyone!");   // only for string printing

    // char str[50];
    // scanf("%s", str); // NOT => &str // Output => only the first word
    // scanf("%[^\n]s", str);
    // gets(str);   // Don't use this => Older Version
    // fgets(str, 50, stdin);   // Upgraded Version
    // puts(str);

    // char str[] = "Ramadaan";
    // puts(str);  // Automatically gives \n (New Lines)
    // printf("%s\n", str);


    // Exercise of Input & Output:
    // char str[50];
    // fgets(str, 50, stdin); // sizeof(str) = 50
    // fgets(str, sizeof(str), stdin);  // Right  =>  sizeof(str) gives array size 50
    // fgets(str, strlen(str), stdin); // ERROR   =>  strlen(str) gives string size which isn't inputed 0
    //    // String Function => strlen(str) = actual size of the string inputed but input(X)
    // printf("%s", str);


    //           Reverse a String

    // char str[] = "program";
    // int i = 0, j = strlen(str)-1; // 0 based indexing
    //   // => program = 7 char
    // printf("%d\n", strlen(str)); // 7 => strlen(str) => gives string size => characters
    // printf("%d\n", sizeof(str)); // 8 => sizeof(str) => gives array size => characters + '\0'
    // while(i < j){
    //     char temp = str[i];
    //     str[i] = str[j];
    //     str[j] = temp;
    //     i++; j--;
    // }
    // printf("%s\n", str); 





    /********************************************************
    #                String as Pointer
    *******************************************************/

/*
    // char str[] = "College Wallah";
    // char * ptr = &str[0];
    // printf("%p\n", ptr);
    // printf("%p\n", str); // str point at zeroth index
    // printf("%p\n", &str[2]);

 // =>   Print string using Pointer

    // char *ptr = str;
    // while(*ptr != '\0'){
    //     printf("%c", *ptr); // *ptr stand for Value
    //     ptr++;              // ptr stand for Address
    // }

    // char * ptr = "Apna College";
    // ptr[0] = "D"; // Error
    // *ptr[0] = "D"; // Error
    // printf("%s\n", ptr); // Apna College
    // printf("%c\n", *ptr); // Apna College

    
//      In normal initialization, we can modify indivitual character BUT
//          not the entire string at the same time.
//      In pointer initialization, we can NOT modify indivitual character
//          BUT we can the entire string at the same time.
    

    // char str[] = "College Wallah";
    // str or str[] = "Physics Wallah"; // Not Possible => Error
    // str[0] = "P";
    // printf("%s", str);

    // char * ptr = "College Wallah";
    // ptr[0] = "P"; // Not Possible => Error
    // ptr = "Physics Wallah";
    // printf("%s", ptr);


    // char str[] = "College Wallah";
    // char *ptr = str; // point at C
    // // * ptr = 'P'; // C chage to P
    // ptr = "Physics Wallah"; // new String created
    // printf("%s\n", str);
    // printf("%s\n", ptr);
    
*/

// Excercise: Copy one string to another
    // char s1[] = "Physics Wallah";
    // char *s2 = s1; // s2 is the shallow copy of s1
    // s2[0] = 'M';
    // printf("%s", s1); // Mhysics Wallah

    // char s1[] = "Physics Wallah";
    // char s2[] = "Physics Wallah";
    // s2[0] = 'M';
    // printf("%s\n", s1);
    // printf("%s\n", s2);
    // printf("%p\n", s1); // 0061FF11
    // printf("%p\n", s2); // 0061FF02

    // char s1[] = "Apna College";
    // int size = strlen(s1);
    // printf("%d\n", size); // 12
    // char s2[size+1];
    // int i = 0;
    // while(s1[i] != '\0'){
    //     s2[i] = s1[i];
    //     i++;
    // }
    // printf("%s", s2);


    /********************************************************
    #       String Functions in C Programming
    *******************************************************/
/*

    • strlen(s)         ==  return the length of a string s
    • strlwr(s)         ==  convert the string s in lower case
    • strupr(s)         ==  convert the string s in upper case
    • strrev(s)         ==  reverse the content of the string s
    • strcpy(s, t)      ==  copy string t into another string s
    • strcpy(s, t)      ==  copy string t into another string s
    • strncpy(s, t, n)  ==  copy n characters of string t into another string s
    • strcat(s, t)      ==  append string t into the right side of the string s
    • strncat(s, t, n)  ==  append n characters of the string t onto the right side
    `                       of the string s
    • strcmp(s, t)      ==  compare alphabetic order of two strings s and t

*/
    // char str[] = "laptop";
    // int size = strlen(str);
    // printf("%d\n", size);
    // printf("%d\n", strlen(str));

    // strupr(str);
    // printf("%s\n", str);
    // printf("%s\n", strupr(str));
    // char *s = strupr(str);
    // printf("%s\n", s);

    // char str[] = "drawer";
    // // char s[] = strrev(str);  //  ERROR
    // //  strrev() reverses the string directly in the original array and returns a pointer to it. It does NOT create a new string.
    // char *x = strrev(str);           //  Right  (1)
    // printf("%s\n", x);
    // strrev(str);                     //  Right  (2)
    // printf("%s\n", str);
    // printf("%s\n", strrev(str));     //  Right  (3)






    /********************************************************
        String in C Programming <--> Programiz
    *******************************************************/

    // char str[] = "Programiz";
    // str[2] = 'O';
    // str[5] = 'A';
    // printf("%s\n", str);
    // printf("%c", str[8]);

    // char str[20];
    // printf("Enter your user: ");
    // scanf("%s", str);
    // printf("%s", str);

    // char str[20];
    // printf("Enter your user: ");
    // fgets(str, sizeof(str), stdin);
    // printf("%s", str);



    /********************************************************
    #           Array of String <--> Bro Code
    *******************************************************/

    // char fruit[] = "Apple";
    // printf("%s\n", fruit);

    // char fruits[][10] = {"Apple", "Banana", "Coconut", "Pineapple", "Lemon"};
    // int size = sizeof(fruits) / sizeof(fruits[0]);
    // for(int i=0; i<size; i++){
    //     printf("%s ", fruits[i]);
    // }
    return 0;
}