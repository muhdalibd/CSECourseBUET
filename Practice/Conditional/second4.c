#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d%d%d%d", &a,&b,&c,&d);

    int max = a, second = b;
    if(b > max){
        second = max;
        max = b;
    }
    // Compare with c
    if(c > max){
        second = max;
        max = c;
    }
    else if(c < max && c > second){
        second = c;
    }
    
    // Compare with d
    if(d > max){
        second = max;
        max = d;
    }
    else if(d < max && d > second){
        second = d;
    }

    printf("%d\n", second);




    // int max1 = (a > b) ? a : b;
    // int min1 = (a < b) ? a : b;

    // int max2 = (c > d) ? c : d;
    // int min2 = (c < d) ? c : d;

    // int second1 = (max1 > max2) ? max2 : max1;
    // int second2 = (min1 > min2) ? min1 : min2;

    // int second = (second1 > second2) ? second1 : second2;

    // printf("%d\n", second);
    return 0;
}