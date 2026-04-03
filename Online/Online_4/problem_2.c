#include <stdio.h>

int main(){
    char s1[50];
    fgets(s1, sizeof(s1), stdin);
    char s2[50];
    fgets(s2, sizeof(s2), stdin);

    int i = 0, j = 0;
    int cnt = 0;
    while(s1[i] != '\0'){   // program
        if(s1[i] != s2[j]){ // grammer
            i++;
        } else{
            j++; i++;
            cnt ++;
        }
    }

    printf("%d", cnt);
    return 0;
}