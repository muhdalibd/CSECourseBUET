#include <stdio.h>

void swap01(int x, int y);
void swap02(int *x, int *y);

int main(){
    /*

    //  1 => Basics of Pointer

    int x = 9;
    printf("%p \n", &x);
    int *ptr = &x;
    printf("%p \n", ptr);
    int y = 9;
    int *ptr2 = &y;
    printf("%p \n", ptr2);
    */

    //  2 => Printing Value using Pointer

    /*
    int x = 90;
    int *ptr = &x;
    printf("%p \n", ptr);
    printf("%d \n", *ptr);  // Dereferance Operator
    */

    //  3 => Changing Value using Pointer

    /*
    int x = 90;
    printf("%p\n", &x);
    printf("%d\n", x);
    x = 50;
    printf("%p\n", &x);
    printf("%d\n", x);
    int *ptr = &x;
    *ptr = 30;
    printf("%p\n", ptr);
    printf("%d\n", x);
    */

    // Swap Function of Two Numbers

    /*
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d %d\n", x,y);
    swap01(x,y); // Pass by Value
    printf("%d %d\n", x,y);

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a,b);
    swap02(&a, &b); // Pass by Reference
    printf("%d %d\n", a,b);
    */
    return 0;
}



void swap01(int x, int y){
    // Pass by Value
    int temp = x;
    x = y;
    y = temp;
}

void swap02(int *x, int *y){
    // Pass by Reference
    int temp = *x;
    *x = *y;
    *y = temp;
}
