#include <stdio.h>

int main(){
 struct {int a[2];} arr[] = {{1},{2}};
 printf("%d %d %d %d",arr[0].a[0],arr[0].a[1],arr[1].a[0],arr[1].a[1]);
 return 0;
}




// union test{
//     int x;
//     char arr[8];
//     int y;
// };
// /*
//     Explanation:
//     When we declare a union, memory allocated for a union variable of the type is equal to
//     memory needed for the largest member of it, and all members share this same memory space.
//     In above example, "char arr[8]" is the largest member. Therefore size of union test is 8 bytes.
// */
// int main(){
//     printf("%d", sizeof(union test));
//     return 0;
// }




// union test{
//     int x;
//     char arr[4];
//     int y;
// };
// /*
//     Explanation:
//     Since x and arr[4] share the same memory, when we set x = 0, all characters of arr are set as 0.
//     O is ASCII value of '0'. When we do "t.arr[1] = 'G'", arr[] becomes "0G00".
//     When we print a string using "%s", the printf function starts from the first character
//     and keeps printing till it finds a 0. Since the first character itself is 0, nothing is printed.
// */
// int main(){
//     union test t;
//     t.x = 0;
//     t.arr[1] = 'G';
//     printf("%s", t.arr);
//     return 0;
// }



// #include <stdio.h>
// /*
//     Explanation:
//     Since fields/members of union share same memory, both i1 and i2 refer to same location.
//     Also, since both i1 and i2 are of same type, initializing one would initialize
//     the other as well implicitly. So answer is C.
// */
// int main(){
//     union {
//         int i1;
//         int i2;
//     } myVar = {.i2 = 100};
//     printf("%d %d", myVar.i1, myVar.i2);
//     return 0;
// }



// struct {
//     /*
//     Explanation:
//     Short array s[5] will take 10 bytes as size of short is 2 bytes. 
//     When we declare a union, memory allocated for the union is equal to memory needed for the
//     largest member of it, and all members share this same memory space. Since u is a union,
//     memory allocated to u will be max of float y(4 bytes) and long z(8 bytes).
//     So, total size will be 18 bytes (10 + 8).
//     */
//     short s[5];
//     union { 
//         float y; 
//         long z; 
//     }u; 
// }t;