#include <stdio.h>

void printEven(){
    int n;
    scanf("%d", &n);
    if(n < 0){
        return;
    }
    
    printEven();

    if(n % 2 == 0){
        printf("%d ", n);
    }
}

int main(){
    printEven();
    return 0;
}