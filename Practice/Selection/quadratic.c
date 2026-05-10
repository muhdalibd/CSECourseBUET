#include <stdio.h>
#include <math.h>
/*
    Write a C program to calculate the root of a quadratic equation.
    Test Data : 1 5 7
    Expected Output :
    Root are imaginary;
    No solution.
*/
int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);

    int d = b*b - 4*a*c;
    float x1, x2;
    if(d == 0){
        x1 = -b /2*a;
        x2 = x1;
        printf("%.0f\n%.0f", x1,x2);
    }
    else if(d > 0){
        x1 = (-b + sqrt(d)) / 2*a;
        x2 = (-b - sqrt(d)) / 2*a;
        printf("%.2f\n%.2f", x1,x2);
    } else{
        printf("Imaginary");
    }
    return 0;
}