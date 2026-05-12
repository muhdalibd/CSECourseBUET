#include <stdio.h>

int printSum01(int i, int sum){
    if(i < 1){
        printf("%d", sum);
        return 0;
    } else{
        printSum01(i-1, sum+i);
    }
}

int printSum03(int n){
    if(n == 0) return 0;
    return n + printSum03(n-1);
}

int printSum02(int n){
    int sum = 0;
    if(n == 0){
        return sum;
    }
    sum = n + printSum02(n - 1);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // int sum = 0;
    // // int ans = printSum01(n,sum);
    // // printf("%d", ans);

    int ans = printSum03(n);
    printf("Summation: %d", ans);
    return 0;
}