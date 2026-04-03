#include <stdio.h>
#include <string.h>

int strLen(char str[]){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

void strCat(char str[], char stp[]){
    int i=0;
    int j = strLen(str);
    while(stp[i] != '\0'){
        str[j+i] = stp[i];
        i++;
    }
    str[j+i] = '\0';
}

int main(){
    char str[] = "Ramadaan";
    char stp[] = "Mubaraak";
    strCat(str, stp);
    puts(str);
    return 0;
}