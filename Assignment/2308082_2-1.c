/*
    2. (a) Write a C program to sort an array of integers using the selection sort algorithm.
    You don't need to scan any number from the user. Show the steps of the selection sort
    algorithm for the following array:
    #                            14,33,27,10,35,19,44,42
*/

/*
    WE HAVE TO DRAW THE SELECTION SORT ALGORITHM STEPS
*/

#include <stdio.h>

int main(){
    int arr[] = {14,33,27,10,35,19,44,42};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}