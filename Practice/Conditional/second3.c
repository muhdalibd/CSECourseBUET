#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);

    // Process: 01
    // int second = -1;
    // if((a > b && a < c) || (a < b && a > c)){
    //     second = a;
    // }
    // else if((b > a && b < c) || (b < a && b > c)){
    //     second = b;
    // } else{
    //     second = c;
    // }
    // printf("%d\n", second);



    // Process: 02
    // int max = a;
    // if(b > max) max = b;
    // if(c > max) max = c;

    // int min = a;
    // if( b < min) min = b;
    // if( c < min) min = c;

    // int second = (a+b+c) - max - min;
    // printf("%d\n", second);
    return 0;
}