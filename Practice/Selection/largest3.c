#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);

    // Process: 01

    // int max = -1;
    // if(a > b && a > c){
    //     max = a;
    // }
    // else if(b > a && b > c){
    //     max = b;
    // } else{
    //     max = c;
    // }
    // printf("%d\n", max);



    // Process: 02

    // int max = a;
    // if(b > max) max = b;
    // if(c > max) max = c;
    // printf("%d\n", max);

    

    // Process: 03

    // int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    // printf("%d\n", max);

    
    //  Pairwise Comparison

    int max1 = (a > b) ? a : b;
    int max = (c > max1) ? c : max1;
    printf("%d\n", max);

    return 0;
}