#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPangram(char str[]) {
    bool letters[26] = {false};
    
    // Convert entire string to lowercase
    strlwr(str);  // Non-standard function
    
    // Mark present letters
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            letters[str[i] - 'a'] = true;
        }
    }
    
    // Check all letters
    for (int i = 0; i < 26; i++) {
        if (!letters[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[1000];
    
    printf("Enter a string: "); //  The quick brown fox jumps over the lazy dog
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    if (isPangram(str)) {
        printf("'%s' is a pangram!\n", str);
    } else {
        printf("'%s' is NOT a pangram.\n", str);
    }
    
    return 0;
}