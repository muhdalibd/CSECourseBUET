#include <stdio.h>
/*
    find the first value that is greater than or equal to given value
*/
int lowerBound(int arr[], int n, int key){
    int low = 0, high = n-1;
    int lower = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == key){
            lower = mid;
            high = mid - 1;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return lower;
}

int main(){
    int arr[] = {2,4,6,8,8,8,11,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    int ans = lowerBound(arr, n, target);
    printf("%d", ans);
    return 0;
}