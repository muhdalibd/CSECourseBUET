#include <stdio.h>

void reverseNum(int num){
    if(num == 0) return;
    printf("%d", num % 10);
    reverseNum(num / 10);
}

int main(){
    int num;
    scanf("%d", &num);
    while(num % 10 == 0){
        num = num / 10;
    }
    reverseNum(num);
    return 0;
}