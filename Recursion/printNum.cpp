#include <iostream>
using namespace std;

void printName(int i, int n){
    if(i>n) return;
    cout<<"Mohammad Ali Hasan"<<endl;
    printName(i+1,n);
}

void printNum01(int i, int n){
    if(i > n) return;
    cout<<i<<" ";
    printNum01(i+1,n);
}

void printNum02(int i, int n){
    if(i <= 0) return;
    cout<<i<<" ";
    printNum02(i-1,n);
}

// PRINTING USING BACK-TRACKING

void printNum03(int i, int n){
    if(i <= 0) return;
    printNum03(i-1,n);
    cout<<i<<" ";
}

void printNum04(int i, int n){
    if(i > n) return;
    printNum04(i+1,n);
    cout<<i<<" ";
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // printName(1,n);
    // printNum01(1,n);
    // printNum02(n,n);
    // printNum03(n,n);
    // printNum04(1,n);

    // int i = 1;
    // printNum(i,n);
    return 0;
}