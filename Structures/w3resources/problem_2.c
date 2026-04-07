/*
    2. Time Structure Calculations
    Define a structure named Time with members hours, minutes, and seconds.
    Write a C program to input two times, add them, and display the result in proper time format.
*/
#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main(){
    struct Time t1;
    struct Time t2;

    printf("Time 1 (hms): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Time 2 (hms): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    int totalSeconds = t1.seconds + t2.seconds;
    int addMinutes = totalSeconds / 60;
    totalSeconds = totalSeconds % 60;
    int totalMinutes = t1.minutes + t2.minutes + addMinutes;
    int addHours = totalMinutes / 60;
    totalMinutes = totalMinutes % 60;
    int totalHours = t1.hours + t2.hours + addHours;

    printf("%d : %d : %d\n", totalHours, totalMinutes, totalSeconds);
}
