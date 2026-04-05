/*
    2. (b) Write a complete C program using recursion that finds out the sum of digits of a
    given integer.
*/

#include <stdio.h>

int sumDigits(int n){
    if(n == 0){
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d", sumDigits(n));

    return 0;
}