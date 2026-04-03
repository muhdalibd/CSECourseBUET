#include <iostream>
using namespace std;

void reverseArr01(int arr[], int n, int i, int j){
    if(j < i) return;
    swap(arr[i], arr[j]);
    reverseArr01(arr, n, i+1, j-1);
}


int arr[] = {1, 2, 3, 4, 5};

void reverseArr02(int i, int j){
    if(j < i) return;
    swap(arr[i], arr[j]);
    reverseArr02(i+1, j-1);
}


int n = sizeof(arr)/sizeof(arr[0]);

void reverseArr03(int i){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArr03(i+1);
}


int main(){
    // int arr[] = {1, 2, 3, 4, 2};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // reverseArr01(arr, n, 0, n-1);
    // reverseArr02(0, n-1);
    reverseArr03(0);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}