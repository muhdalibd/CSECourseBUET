#include <stdio.h>
/*
    find the first value that is greater than to given value
*/
int upperBound(int arr[], int n, int key){
    int low = 0, high = n-1;
    int upper = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] > key){
            upper = mid;
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return upper;
}

int main(){
    int arr[] = {2,4,6,8,8,8,11,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    int ans = upperBound(arr, n, target);
    printf("%d", ans);
    return 0;
}