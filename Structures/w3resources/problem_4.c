/*
    4. Circle Structure Calculations
    Define a structure named Circle to represent a c1 with a radius.
    Write a C program to calculate the area and perimeter of two circles and display the results.
*/
#include <stdio.h>
#include <math.h>

struct Circle {
    float radius;
};

int main(){
    struct Circle c1, c2;
    printf("Circle 1 radius: ");
    scanf("%f", &c1.radius);
    printf("Circle 2 radius: ");
    scanf("%f", &c2.radius);

    float area1 = 3.1416 * pow(c1.radius, 2);
    float perimeter1 = 2 * 3.1416 * c1.radius;

    float area2 = 3.1416 * pow(c2.radius, 2);
    float perimeter2 = 2 * 3.1416 * c2.radius;

    printf("%.2f\t%.2f\n", area1, perimeter1);
    printf("%.2f\t%.2f\n", area2, perimeter2);
    return 0;
}