#include <stdio.h>

/*
    A year is a leap year if "any one of " the following conditions are satisfied: 
    1. The year is multiple of 400.
    2. The year is a multiple of 4 and not a multiple of 100.
*/

int main(){
    int year;   // 1 year = 365.2425 days
    scanf("%d", &year);
    if (year % 400 == 0){
        printf("%d is leap year.", year);
    }
    else if (year % 4 == 0 && year % 100 != 0){
        printf("%d is leap year.", year);
    } else{
        printf("%d isn't leap year.", year);
    }

    return 0;
}