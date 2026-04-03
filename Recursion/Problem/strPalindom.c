#include <stdio.h>
#include <string.h>

int palindrome(char str[], int i){
    int n = strlen(str);
    if(i >= n/2) return 1;
    if(str[i] != str[n-i-2]) return 0;
    palindrome(str, i+1);
}

int main(){
    char str[50];
    fgets(str, sizeof(str), stdin);
    printf("%d", palindrome(str, 0));
    return 0;
}