/*
    Macros and Macro Functions => Shortcut
*/

#include <stdio.h>
#define PI 3.14159265359
#define Area(r) (PI*r*r) // Shortcut of Function

// float area(int r){
//     return PI*r*r;
// }

int main(){
    // printf("%f\n", PI); // 3.141593 because Float -> 6 desimal
    // printf("%.11f\n", PI); // 3.14159265359 because round -> 11 desimal

    // printf("%f", area(10));
    printf("%f", Area(10));
}