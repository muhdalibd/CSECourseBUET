#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    // taking input a matrix from user
    int mat[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }
    // initializing transpose with zero
    int trans[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            trans[i][j] = 0;
        }
    }
    // performing transpose of a matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            trans[i][j] = mat[j][i];
        }
    }
    cout << endl;
    // showing output of transpose matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << trans[i][j] <<" ";
        }
        cout << endl;
    }
    // multiplication of two matrix
    int multi[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            multi[i][j] = 0;
        }
    }
    // performing multi of two matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<n; k++){
                multi[i][j] += mat[i][k] * trans[k][j];
            }
        }
    }
    cout << endl;
    // showing output of multi matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout << multi[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}