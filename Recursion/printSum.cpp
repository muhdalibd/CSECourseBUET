#include <iostream>
using namespace std;

void printSum01(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    printSum01(i-1, sum+i);
}


int printSum02(int i, int n){
    if(i>n) return 0;
    return i + printSum02(i+1, n);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // printSum01(n, 0);
    // int ans = printSum02(1,n);
    // cout << ans;
    return 0;
}