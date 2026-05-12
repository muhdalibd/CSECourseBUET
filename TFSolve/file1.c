#include <stdio.h>
#include <string.h>

int strToInt(char str[]){
    int i = 0;
    int num = 0;
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            num = num * 10 + (str[i] - '0');
        }
        i++;
    }
    return num;
}

int main(){
    FILE *fptr;
    int minID = 1705061;
    int maxID = 1705090;
    int totalID = maxID - minID + 1;
    int presentIDs[100] = {0};

    char line[100];
    int stdID;

    fptr = fopen("data.txt", "r");
    while(fgets(line, sizeof(line), fptr) != NULL){
        if(strlen(line) <= 1){
            continue;
        }
        line[strcspn(line, "\n")] = '\0';
        stdID = strToInt(line);
        if(stdID >= minID && stdID <= maxID){
            presentIDs[stdID - minID] = 1;
        }
        for(int i=0; i<3; i++){
            fgets(line, sizeof(line), fptr);
        }
    }
    fclose(fptr);

    FILE *idFile;
    idFile = fopen("id.txt", "w");


    for(int i=0; i<totalID; i++){
        if(presentIDs[i] == 0){
            fprintf(idFile, "%d\n", minID + i);
        }
    }
    fclose(idFile);
    return 0;
}