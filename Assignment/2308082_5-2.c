/*
    5. (b) Write a C program that will determine whether or not a point is on, inside, or
    outside a circle. The program will take as input the center co-ordinate and the radius of
    the circle, and then the co-ordinate of the said point. Note that you can only use
    standard input and output (stdio.h) library. Sample inputs and outputs are given
    below:

*/

#include <stdio.h>

int main(){
    float centerX, centerY, radius;
    scanf("%f %f %f", &centerX, &centerY, &radius);

    float pointX, pointY;
    scanf("%f %f", &pointX, &pointY);

    float distanceSqure = (centerX-pointX) * (centerX-pointX) + (centerY-pointY) * (centerY-pointY);
    float radiusSqure = radius * radius;
    if(distanceSqure == radiusSqure){
        printf("ON");
    }
    else if(distanceSqure > radiusSqure){
        printf("OUTSIDE");
    } else {
        printf("INSIDE");
    }
    return 0;
}