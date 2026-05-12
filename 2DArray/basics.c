#include <stdio.h>

int main(){
    // How to put values in a 2D array
    // int mat[3][4];
    // mat[0][0] = 4;
    // mat[0][3] = 2;
    // mat[1][3] = 1;
    // mat[2][3] = 5;

    // int mat[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int mat[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };

    // By taking input from user
    // int mat[3][4];
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         scanf("%d", &mat[i][j]);
    //     }
    // }

    // Showing content of a 2-Dim Array
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         printf("%d ", mat[i][j]);
    //     }
    //     printf("\n");
    // }

    // int mat[3][4];
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         mat[i][j] = i;
    //     }
    // }
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         printf("%d ", mat[i][j]);
    //     }
    //     printf("\n");
    // }


    // int mat[3][4];
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         mat[i][j] = j;
    //     }
    // }
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         printf("%d ", mat[i][j]);
    //     }
    //     printf("\n");
    // }


    // int mat[3][4];
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         mat[i][j] = i+j;
    //     }
    // }
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         printf("%d ", mat[i][j]);
    //     }
    //     printf("\n");
    // }


    int mat[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i == j) mat[i][j] = 0;
            if(i > j) mat[i][j] = -1;
            if(i < j) mat[i][j] = +1;
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}