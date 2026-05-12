#include <stdio.h>
/*
2 4 3
1 4 6 10
2 7 5 3
1 4 6
2 7 5
9 0 11
3 1 0

93 42 92 
70 60 102
*/

int main(){
    int m,n,p;
    scanf("%d%d%d", &m,&n,&p);
    // taking input of matrix 1
    int mat1[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    // taking input of matrix 2
    int mat2[n][p];
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    // initialize multi matrix with zero
    int mat[m][p];
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            mat[i][j] = 0;
        }
    }
    // performing multi of two matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            for(int k=0; k<n; k++){
                mat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("\n");
    // showing output of multi matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}