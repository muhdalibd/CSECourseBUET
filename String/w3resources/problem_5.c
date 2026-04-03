#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline
    str[strcspn(str, "\n")] = 0;
  
    int words = 1;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0'){
            words++;
        }
    }
    
    printf("Number of words: %d\n", words);
    
    return 0;
}



// int main(){
//     /*
//         C program to count the total number of words in a string.
//     */
//     char str[50];
//     gets(str);

//     int wrd = 1;
//     int i = 0;
//     while(str[i] != '\0'){
//         if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
//             wrd ++;
//         }
//         i ++;
//     }
//     printf("%d", wrd);
//     return 0;
// }