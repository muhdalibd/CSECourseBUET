#include <stdio.h>

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int combination(int n, int r){
    return (factorial(n) / (factorial(r) * factorial(n-r)));
}

void pattern01(int n){
    for(int i=0; i<=n; i++){
        for(int k=n-i; k>0; k--){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            int ncr = combination(i,j);
            printf("%d ", ncr);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // int fact = factorial(n);
    // printf("%d", fact);
    // int ncr = combination(n,5);
    // printf("%d", ncr);
    pattern01(n);
    return 0;
}