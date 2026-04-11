#include <iostream>
using namespace std;

/*
    Bitwise operators perform operations directly on the binary representation of integers.
    1. Bitwise AND (&)
        both 0 --> 0
           1  1  1  =>  7
        &  1  0  0  =>  4
          --------
           1  0  0  =>  4
    2. Bitwise OR (|)
        both 1 --> 1
            1  1  1  =>  7
        |   1  0  0  =>  4
           ---------
            1  1  1  =>  7
    3. Bitwise XOR (^)
        same --> 0
        diff --> 1
            1  1  1  =>  7
        ^   1  0  0  =>  4
           ---------
            0  1  1  =>  3
    4.Bitwise NOT (~)
       ~ 0 0 1 0 0
       ------------
        1 1 0 1 1
    5. Left Shift (<<)
        0 0 0 0 0 1 0 1 => 5 << 2
        ----------------
        0 0 0 1 0 1 0 0 => 20
    6. Right Shift (>>)
        0 0 0 0 0 1 0 1 => 5 << 2
        ----------------
        0 0 0 0 0 0 0 1 => 1
*/

int main(){
    // int a = 7, b = 4;
    // int x = a & b;
    // int x = a | b;
    // int x = a ^ b;
    // cout << x << endl;
    // int q = 5;
    // cout << (~ q) << endl;
    // cout << (q<<2) <<endl;
    // //  a << b = a * 2^b
    // cout << (q>>2) <<endl;
    // //  a >> b = a / 2^b
    return 0;
}