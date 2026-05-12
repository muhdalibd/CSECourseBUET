#include <stdio.h>

int lowerBound(int arr[], int n, int target){
    int low = 0, high = n-1;
    int first = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return first;
}


int upperBound(int arr[], int n, int target){
    int low = 0, high = n-1;
    int last = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return last;
}


int countFreq(int arr[], int n, int target) {
    int first = lowerBound(arr, n, target);
    int last = upperBound(arr, n, target);
    
    if(first == -1) return 0;
    return (last - first + 1);
}


int main(){
    int arr[] = {2,4,6,8,8,8,11,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    int ans = countFreq(arr, n, target);
    printf("%d", ans);
}