#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);    //  Array Size

    int *ptr = (int*) malloc(sizeof(int) * n);
        // Dynamically Memory Allocation for an array size n,
        // Above line can be treated as: => int *ptr = int arr[n];

    if(ptr == NULL){
        printf("Memory Allocation Failed!");
        return 0;
    }

    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}


//  int *ptr = (int*) calloc(n, sizeof(int));  // All elements initialized to 0