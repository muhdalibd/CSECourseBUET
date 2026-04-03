#include <iostream>
using namespace std;

void printName(int i, int n){
    if(i > n) return;
    cout << "Ramadaan Mubarak" << endl;
    printName(i+1, n);
}

void printNum01(int i, int n){
    if(i > n) return;
    cout << i << " ";
    printNum01(i+1, n);
}

void printNum02(int i, int n){
    if(i == 0) return;
    cout << i << " ";
    printNum02(i-1, n);
}

//  Using Backtraking
void printNum03(int i, int n){
    if(i == 0) return;
    printNum03(i-1, n);
    cout << i << " ";
}

void printNum04(int i, int n){
    if(i > n) return;
    printNum04(i+1, n);
    cout << i << " ";
}

/*
    Recursion ==> when a function call itself
    untill a specific condition is met (Base Case)
*/
int main(){
    int n;
    cin >> n;

    // printName(1, n);
    // printNum01(1,n);
    // printNum02(n,n);
    // printNum03(n,n);
    // printNum04(1,n);
    return 0;
}