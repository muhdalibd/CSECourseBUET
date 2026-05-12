#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    // taking input of a matrix
    int mat1[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    // initializing trans with zero
    int mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat[i][j] = 0;
        }
    }
    // performming transpose of matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat[i][j] = mat1[j][i];
        }
    }
    printf("\n");
    // showing the transpose matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}