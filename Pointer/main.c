/*
    Introduction to Pointer in C
    A pointer is a special variable that stores the memory address of another variable.
    It points to a memory location where the first byte is stored.
*/
/*
    Declaring and Initializing Pointer in C
        data_type *pointer_name
    Here data_type refers to the type of the value that the pointer will point to.
    int *ptr => Points to integer value
    char *ptr => Points to character value
    float *ptr => Points to float value
*/

#include <stdio.h>
// int main(){
//     // int x = 5;
//     // int *ptr;
//     // ptr = &x;
//     //  In one line
//     int x = 5, *ptr = &x;
//     printf("%p", ptr);
//     return 0;
// }

/*
    Value of Operator:
    Value of operator/Indirection Operator/Dereference Operator is an operator that is used to
    access the value stored at the location pointed by the pointer.
    A word of Caution:
    1. Never apply the indirection operator to the uninitialized pointer.
    2. Assigning value to an uninitialized pointer is dangerous.
*/

// int main(){
//     // int x = 10;
//     // int *ptr = &x;
//     // printf("%d\n", *ptr); //  dereference
//     // printf("%d\n", *&x);
//     // • We can also change the value
//     // *ptr = 20;
//     // printf("%d\n", x);
//     // • Caution
//     // int *ptr;
//     // printf("%d\n", *ptr);   //  Undefined Behaviour -> 1
//     // int *ptr;
//     // *ptr = 1;   //  Segmentation Fault -> 2
//     // printf("%d", *ptr); //  trying to read and write illegal memory location
//     return 0;
// }


/*
    Pointer Assignment
        =>  From one Pointer to another Pointer.
*/

// int main(){
//     // int i = 10;
//     // int *p, *q;
//     // p = &i;
//     // q = p;
//     // printf("%d %d\n", *p, *q);
//     //  q = p is not same as *q = *p
//     // int i = 10, j = 20;
//     // int *p, *q;
//     // p = &i;
//     // q = &j;
//     // *q = *p;
//     //  Homework  (Important Concept)
//     // int i = 1;
//     // int *p = &i;
//     // int q = p;  // q must be a pointer too
//     // *q = 5;     // ERROR: q is int, not a pointer
//     // printf("%d\n", *p);
// }


/*
    Application of Pointers: largest and Smallest Element in an Array
*/
// void minMax(int arr[], int len, int *min, int *max){
//     *min = arr[0];
//     *max = arr[0];
//     for(int i=0; i<len; i++){
//         if(arr[i] > *max){
//             *max = arr[i];
//         }
//         if(arr[i] < *min){
//             *min = arr[i];
//         }
//     }
// }
// int main(){
//     int arr[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int min, max;
//     minMax(arr, len, &min, &max);
//     printf("%d %d\n", min, max);
// }


/*
Returning Pointers: Find the mid of the Array
*/
// int *findMid(int arr[], int len){
//     return &arr[len/2];
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int *mid = findMid(arr, len);
//     printf("%d\n", *mid);
// }

/*
    Word of Causion:
    Never ever try to return the address of an automatic variable
*/
// int *fun(){
//     int i = 10;    // i is a LOCAL variable
//     return &i;     // Returns address of local variable
// }                  // i is DESTROYED here (goes out of scope)

// int main(){
//     int *p = fun();   // p now points to invalid memory
//     printf("%d\n", *p);  // DEREFERENCING DANGLING POINTER - UNDEFINED BEHAVIOR
//     return 0;
// }

/*
    Important Questions
*/
// void fun(const int *ptr){
//     *ptr = 10;  // p is a constant integer (cannot be modified)
// }
// int main(){
//     const int p = 25;
//     fun(&p);
//     printf("%d\n", p);   //  ERROR
//     return 0;
// }



/*
    Pointer Arithmetic - (Addition)
        p = p + 3 <==> &arr[0 + 3]
*/

int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr = &arr[0];
    ptr = ptr + 4;
    printf("%d\n", *ptr);
    return 0;
}