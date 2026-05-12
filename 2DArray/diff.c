#include <stdio.h>

int main(){
    int m,n;
    scanf("%d%d", &m,&n);
    // taking input of matrix 1
    int mat1[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    // taking input of matrix 2
    int mat2[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    // initialize diff matrix with zero
    int mat[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            mat[i][j] = 0;
        }
    }
    // performing diff of two matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            mat[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printf("\n");
    // showing output of diff matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}