#include <stdio.h>
#include <stdlib.h>

int main(){
    int row, col;
    scanf("%d%d", &row, &col);

    // int **arr = (int **) malloc(row * sizeof(int *));
    // if(arr == NULL){
    //     printf("Allocation Failed for Row");
    // }
    // for(int i=0; i<row; i++){
    //     arr[i] = (int *) malloc(col * sizeof(int));
    // }


    int *arr = (int *) malloc(row * col * sizeof(int));

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            // scanf("%d", &arr[i][j]);
            scanf("%d", &arr[i*col + j]);
        }
    }
    
    printf("\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            // printf("%d ", arr[i][j]);
            printf("%d ", arr[i * col + j]);
        }
        printf("\n");
    }
    
    free(arr);
    return 0;
}