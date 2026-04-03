#include <stdio.h>

int amicablePair(int n){
    int num1 = 0;
    for(int i=1; i<n; i++){
        if(n % i == 0){
            num1 += i;
        }
    }

    int num2 = 0;
    for(int i=1; i<num1; i++){
        if(num1 % i == 0){
            num2 += i;
        }
    }

    if(num2 == n){
        return num1;
    } else{
        return -1;
    }
}

int searchIndex(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}


int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int key = amicablePair(n);

    int arr[size];
    printf("Enter %d elements: ", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    int idx = searchIndex(arr, size, key);
    printf("Index Position: %d", idx);

    return 0;
}