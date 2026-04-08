/*
    5. (c) Write a C program that will take as input three distinct integers a, b, and c and
    output their median value. You can only use ternary conditional operators.
*/

#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int median = (a > b) ? ((b > c) ? b : ((a > c) ? c : a)) : ((a > c) ? a : ((b > c) ? c : b));
    printf("%d", median);
    return 0;
}