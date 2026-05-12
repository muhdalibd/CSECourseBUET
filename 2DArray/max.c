#include <stdio.h>

int main(){
    int m,n;
    scanf("%d%d", &m,&n);
    int mat[m][n];
    // taking input of matrix 1
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    // searching largest element
    int max = mat[0][0];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j] > max){
                max = mat[i][j];
            }
        }
    }
    printf("%d", max);
    return 0;
}