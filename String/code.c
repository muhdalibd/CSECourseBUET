#include <stdio.h>
#include <string.h>

/*
    Write down a program that will print n-th letter in a
    sentence entered by a user. n will be input to your program.
*/

// int main(){
//     char str[80];
//     int n, length;
//     printf("Enter a Sentence:");
//     gets(str); //   fgets(str, 80, stdin);
//     length = strlen(str);
//     printf("Total char in sentence is: %d\n", length);
//     printf("Which position? ");
//     scanf("%d", &n);
//     if(n < length){
//         printf("The letter is: %c", str[n]);
//     } else{
//         printf("No letter at such position");
//     }
// }



/*
    Write down a program that will print letters of a
    sentence in a vertical line. Add delay as needed.
*/

// #include <windows.h>
// int main(){
//     char str[80];
//     int n,length,i;
//     printf("Enter a Sentence: ");
//     gets(str);
//     length = strlen(str);
//     for(i = 0; i < length; i++){
//         printf("%c\n", str[i]);
//         Sleep(500);
//     }
//     return 0;
// }



/*
    Write down a function that compares two strings and
    returns 1 if they are same and returns 0 otherwise.
*/

// int sameString(char s1[], char s2[]){
//     if (strlen(s1) != strlen(s2)){
//         return 0;
//     }
//     for(int i=0; i<strlen(s1); i++){
//         if (s1[i] != s2[i]) return 0;
//     }
//     return 1;
// }
// int main(){
//     char str1[] = "hello";
//     char str2[] = "hello";
//     int ans = sameString(str1, str2);
//     printf("%d\n", ans);
// }


/*
    Write down a program that searches for a letter in a
    sentence. Both letter and sentence will be input to
    your program. Print last position of the letter found
    in the sentence.
*/

// int main(){
//     char str[80], ch;
//     printf("Enter a Sentence: ");
//     gets(str);
//     printf("Which letter? ");
//     scanf("%c", &ch);
//     int length = strlen(str);
//     int p = -1;
//     for(int i=0; i<length; i++){
//         if(str[i] == ch){
//             p = i;
//         }
//     }
//     if(p == -1){
//         printf("Sorry not found");
//     } else{
//         printf("Found at position: %d", p);
//     }
// }



/*
    Write down a program that prints how many times a
    letter appeared in a sentence. Both letter and
    sentence will be input to your program.
*/

// int main(){
//     char str[100], ch;
//     printf("Enter a Sentence: ");
//     gets(str);
//     printf("Which letter? ");
//     scanf("%c", &ch);
//     int cnt = 0;
//     for(int i=0; i<strlen(str); i++){
//         if(str[i] == ch){
//             cnt ++;
//         }
//     }
//     printf("%d\n", cnt);
//     return 0;
// }