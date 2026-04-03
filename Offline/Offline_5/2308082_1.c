/*
Your Task:
    Your task is to give output in 2 different text files named id.txt and repeat.txt.
    You have to create and write in those files from your C code.
        1. The IDs of those students for whom no data is present in the data.txt file
            will be listed in increasing order in the id.txt file.
        2. ---
    See the given id.txt and repeat.txt files for a clear understanding of the output format.
*/



#include <stdio.h>
#include <string.h>

int stringToInt(char str[]){
    int num = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            num = num * 10 + (str[i] - '0');
        }
        i++;
    }
    return num;
}

int main() {
    FILE *dataFile;
    
    int minID = 1705061;
    int maxID = 1705090;
    int totalIDs = maxID - minID + 1;
    
    int presentIDs[100] = {0};
    
    char line[100];
    int stdID;

    dataFile = fopen("data.txt", "r");

    while(fgets(line, sizeof(line), dataFile) != NULL){
        if(strlen(line) <= 1){
            continue;
        }
        line[strcspn(line, "\n")] = '\0';
        stdID = stringToInt(line);
        if(stdID >= minID && stdID <= maxID){
            presentIDs[stdID - minID] = 1;
        }
        for(int i = 0; i < 3; i++){
            fgets(line, sizeof(line), dataFile);
        }
    }

    fclose(dataFile);

    FILE *idFile;
    idFile = fopen("id.txt", "w");

    int first = 1;
    int missingCount = 0;

    for(int i = 0; i < totalIDs; i++){
        if(presentIDs[i] == 0){
            if(first == 0){
                fprintf(idFile, "");
            }
            fprintf(idFile, "%d\n", minID + i);
            first = 0;
            missingCount++;
        }
    }

    fclose(idFile);

    printf("Missing IDs written to id.txt\n");
    return 0;
}