#include <stdio.h>

// void printNum(int n){
//     if(n == 1){
//         printf("%d\n", n);
//         return;
//     }
//     printf("%d ", n);
//     printNum(n-1);
// }


// void printNum(int n){
//     if(n == 1){
//         printf("%d ", n);
//         return;
//     }
//     printNum(n-1);
//     printf("%d ", n);
// }


void printNum(int i, int n){
    if(i > n) return;
    printf("%d ", i);
    printNum(i+1, n);
}


int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    printNum(i,n);
    return 0;
}