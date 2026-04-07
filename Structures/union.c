/*
    Unions in C
    A union is a user-defined data type that can hold different data types, similar to a structure.
    However, there are some differences:
    In a struct, each member has its own memory.
    In a union, all members share the same memory,
    which means you can only use one of the values at a time.
*/

#include <stdio.h>
#include <string.h>
// Declare a Union

// union Student {
//     char name[30];
//     int rollNo;
//     float height;
// };

// int main(){
//     // Declare a union variable
//     union Student data;
//     // strcpy(data.name, "Muhammad");
//     // printf("%s\n", data.name);
//     // data.rollNo = 21;
//     // printf("%d\n", data.rollNo);
//     // data.height = 5.2;
//     // printf("%.2f\n", data.height);

//     /*
//     Size of a Union
//     When we declare a union, memory allocated for a union variable of the type is equal to
//     memory needed for the largest member of it, and all members share this same memory space.
//     */
//     // printf("%zu\n", sizeof(data));
//     // printf("%ld\n", sizeof(union Student));
//     return 0;
// }



/*
    Nested Union
*/

// union Student {
//     int rollNo;
//     union Academic {
//         int marks;
//     } performance;
// };

// int main(){
//     union Student s1;
//     s1.rollNo = 21;
//     printf("%d\n", s1.rollNo);
//     s1.performance.marks = 91;
//     printf("%d\n", s1.performance.marks);
//     return 0;
// }



/*
    Anonymous Union
*/

// union Student {
//     int rollNo;
//     union {
//         int marks;
//     } performance;
// };

// int main(){
//     union Student s1;
//     s1.rollNo = 21;
//     printf("%d\n", s1.rollNo);
//     s1.performance.marks = 91;
//     printf("%d\n", s1.performance.marks);
//     return 0;
// }
