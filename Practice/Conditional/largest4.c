#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d%d%d%d", &a,&b,&c,&d);

    // Process: 01

    // int max = -1;
    // if(a > b && a > c && a > d){
    //     max = a;
    // }
    // else if(b > a && b > c && b > d){
    //     max = b;
    // }
    // else if(c > a && c > b && c > d){
    //     max = c;
    // } else{
    //     max = d;
    // }



    // Process: 02

    // int max = a;
    // if(b > max) max = b;
    // if(c > max) max = c;
    // if(d > max) max = d;
    // printf("%d\n", max);



    // Process: 03

    // int max = (a > b && a > c && a > d) ? a : (b > c && b > d) ? b : (c > d) ? c : d;
    // printf("%d\n", max); 


    
    //  Pairwise Comparison

    int max1 = (a > b) ? a : b;
    int max2 = (c > d) ? c : d;
    int max = (max1 > max2) ? max1 : max2;
    printf("%d\n", max);
    return 0;
}