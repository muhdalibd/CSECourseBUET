#include <stdio.h>
#include <stdlib.h>

/*
    // Allocate memory for 2D matrix

    int **arr = (int **) malloc(row * sizeof(int *));
    for (int i=0; i<n; i++) {
        arr[i] = (int *) malloc(col * sizeof(int));
    }
    
    // Allocate a single contiguous block

    int *arr = (int*) malloc(row * col * sizeof(int));
*/

int main() {
    int rows, cols;
    
    scanf("%d", &rows);
    scanf("%d", &cols);
    

    // Step 1: Allocate memory for rows (array of pointers)
    int **arr = (int**) malloc(rows * sizeof(int*));
    if(arr == NULL) {
        printf("Memory allocation failed for rows!\n");
        return 1;
    }
    
    // Step 2: Allocate memory for each row (columns)
    for(int i = 0; i < rows; i++) {
        arr[i] = (int*) malloc(cols * sizeof(int));
        if(arr[i] == NULL) {
            printf("Memory allocation failed for row %d!\n", i);
            // Free previously allocated memory
            for(int j = 0; j < i; j++) {
                free(arr[j]);
            }
            free(arr);
            return 1;
        }
    }
    
    // Input elements from user
    printf("Enter %d elements:\n", rows * cols);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Print the 2D array
    printf("\n2D Array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    // Free memory (reverse order)
    for(int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}