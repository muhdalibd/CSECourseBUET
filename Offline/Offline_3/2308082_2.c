#include <stdio.h>

int match(char str[], char ptn[], int i, int j) {
    if (ptn[j] == '\0'){
        return str[i] == '\0';
    }

    int firstMatch = (str[i] != '\0') && (ptn[j] == str[i] || ptn[j] == '.');

    if (ptn[j + 1] == '*'){
        return match(str, ptn, i, j + 2) || (firstMatch && match(str, ptn, i + 1, j));
    }

    return firstMatch && match(str, ptn, i + 1, j + 1);
}

int main(){
    char str[50];   // aaa
    char ptn[50];   // a*

    scanf("%s", str);
    scanf("%s", ptn);

    if(match(str, ptn, 0, 0))
        printf("true");
    else
        printf("false");
    return 0;
}