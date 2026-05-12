#include <stdio.h>

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {3, 4, 5, 7, 8};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int total = n1 + n2;
    int copy[total];
    
    for(int i=0; i<n1; i++){
        copy[i] = arr1[i];
    }
    for(int i=0; i<n2; i++){
        copy[n1+i] = arr2[i];
    }
    // remove duplicate
    int arr[total], cnt = 0;
    for(int i=0; i<total-1; i++){
        int isDupl = 0;
        for(int j=i+1; j<total; j++){
            if(copy[i] == copy[j]){
                isDupl = 1;
                break;
            }
        }
        if(isDupl == 0){
            arr[cnt] = copy[i];
            cnt ++;
        }
    }
    for(int i=0; i<cnt; i++){
        printf("%d ", arr[i]);
    }
}