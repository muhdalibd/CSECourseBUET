#include <stdio.h>
#include <stdlib.h>

int* compressRLE(const int *arr, int n, int *outLen){
    if(n <= 0){
        *outLen = 0;
        return NULL;
    }
    
    int pairCount = 0;
    const int *ptr = arr;
    
    while(ptr < arr + n){
        int currentValue = *ptr;
        int runLength = 0;
        while (ptr < arr + n && *ptr == currentValue){
            runLength++;
            ptr++;
        }
        pairCount++;
    }
    
    int *compressed = (int*)malloc(pairCount * 2 * sizeof(int));
    if(compressed == NULL){
        *outLen = 0;
        return NULL;
    }
    
    ptr = arr;
    int *compPtr = compressed;
    
    while(ptr < arr + n){
        int currentValue = *ptr;
        int runLength = 0;
        
        while(ptr < arr + n && *ptr == currentValue){
            runLength++;
            ptr++;
        }
        
        *compPtr = currentValue;
        compPtr++;
        *compPtr = runLength;
        compPtr++;
    }
    
    *outLen = pairCount * 2;
    return compressed;
}

int* decompressRLE(const int *comp, int compLen, int *outN) {
    if(compLen <= 0 || compLen % 2 != 0){
        *outN = 0;
        return NULL;
    }
    
    int decompressedSize = 0;
    const int *ptr = comp;
    
    while(ptr < comp + compLen){
        ptr++;
        decompressedSize += *ptr;
        ptr++;
    }
    
    
    int *decompressed = (int*)malloc(decompressedSize * sizeof(int));
    if (decompressed == NULL) {
        *outN = 0;
        return NULL;
    }
    
    ptr = comp;
    int *resultPtr = decompressed;
    
    while(ptr < comp + compLen){
        int value = *ptr;
        ptr++;
        int count = *ptr;
        ptr++;
        
        for(int i = 0; i < count; i++){
            *resultPtr = value;
            resultPtr++;
        }
    }
    
    *outN = decompressedSize;
    return decompressed;
}

int main(){
    int N;
    scanf("%d", &N);
    
    int *original = (int*)malloc(N * sizeof(int));
    
    for(int i=0; i<N; i++){
        scanf("%d", &original[i]);
    }
    
    int compLen;
    int *compressed = compressRLE(original, N, &compLen);
    
    printf("\nCompressed: %d\n", compLen);
    if(compressed != NULL){
        for(int i=0; i<compLen; i++){
            printf("%d ", compressed[i]);
        }
        printf("\n");
    }
    
    int decompLen;
    int *decompressed = decompressRLE(compressed, compLen, &decompLen);
    
    printf("Decompressed: %d\n", decompLen);
    if(decompressed != NULL){
        for (int i=0; i<decompLen; i++){
            printf("%d ", decompressed[i]);
        }
        printf("\n");
    }
    
    free(original);
    free(compressed);
    free(decompressed);
    
    return 0;
}