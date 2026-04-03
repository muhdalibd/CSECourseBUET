#include <iostream>
using namespace std;

int main(){
    // Pointer in C++
    // int num = 5; // create block and store 5 in memory
    // cout << num << endl; // compiler memory ko call kore ga kiya ? num block (no) it's address
    // memory me symbol table hota hee, ye symbol table num ko its address ke sath map korta he.

    // addreass of Operator -- &
    // cout << "address of num: " << &num << endl;

    // Pointer kiya korta he --> Store the address
    // int *ptr = &num; // int *ptr --> ptr is a pointer of int data type
    // cout << ptr << endl;

    // int num = 7;
    // int *ptr = &num;
    // cout << "Address of num : " << ptr << endl;
    // cout << "Address of num : " << &num << endl;
    // cout << "Value of num is: " << *ptr << endl;
    // cout << "Value of num is: " << num << endl;

    // char ch = 'A';
    // char *ptr = &ch;
    // cout << "Address of ch : " << (void*)ptr << endl;
    // cout << "Address of ptr: " << &ptr << endl;
    // // cout << "Address of ch : " << &ch << endl;
    // cout << "Value is: " << *ptr << endl;

    /*
        The size of a pointer in C++ is dependent on the system's architecture (32-bit or 64-bit),
        not on the data type it points to:
            4 bytes on a 32-bit system (32 bits).
            8 bytes on a 64-bit system (64 bits)
    */

    // int num = 3;
    // int *ptr = &num;
    // cout << "Address of num : " << ptr << endl;
    // cout << "Value of num is: " << *ptr << endl;
    // cout << "Size of num is : " << sizeof(num) << endl;
    // cout << "Size of ptr is : " << sizeof(ptr) << endl;

    // double num = 4.68;
    // double *ptr = &num;
    // cout << "Address of num : " << ptr << endl;
    // cout << "Value of num is: " << *ptr << endl;
    // cout << "Size of num is : " << sizeof(num) << endl;
    // cout << "Size of ptr is : " << sizeof(ptr) << endl;

    // int *ptr = 0; // pointing to garbase address (Bad Practice)
    // cout << *ptr << endl; // segmentation fault
    // int num = 9;
    // ptr = &num;
    // cout << "Address of num : " << ptr << endl;
    // cout << "Value of num is: " << *ptr << endl;
    
    /*
    int num = 5;
    int x = num;
    x ++;
    cout << num << endl;

    int *ptr = &num;
    (*ptr) ++;
    cout << num << endl;

    // Copying a Pointer
    int *q = ptr;
    cout << ptr << " - " << q << endl;
    cout << *ptr << " - " << *q << endl;
    */

    // Important Concept
    
    // int i = 4;
    // int *p = &i;
    // // cout << (*p)++ << endl;
    // cout << "Address : " << p << endl;
    // *p = *p + 1;    // *ptr --> meaning --> value at address stored in ptr ==> 4 + 1 = 5
    // cout << (*p) << endl;
    // p = p + 1;  // int takes 4 bytes so ==> p = address + 4*1
    // cout <<"Address : " << p << endl;
    // p = p + 2;  // int takes 4 bytes so ==> p = address + 4*2
    // cout <<"Address : " << p << endl;
    // p = p + 3;  // int takes 4 bytes so ==> p = address + 4*3
    // cout <<"Address : " << p << endl;

    return 0;
}