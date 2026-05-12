#include <stdio.h>

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {3, 4, 5, 6, 5};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int min = (n1 < n2) ? n1 : n2;
    int inter[min];
    int cnt = 0;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                inter[cnt++] = arr2[j];
                break;
            }
        }
    }

    for(int i=0; i<cnt; i++){
        printf("%d ", inter[i]);
    }
}