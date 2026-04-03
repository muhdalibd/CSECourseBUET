/*
Your Task:
    Your task is to give output in 2 different text files named id.txt and repeat.txt.
    You have to create and write in those files from your C code.
        1. ---
        2. The ids of those students who have the same student name in the data.txt file
            will be listed in the repeat.txt file along with the repeated name.
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

typedef struct {
    int studentId;
    char studentName[50];
} Student;

int main(){
    FILE *dataFile;

    Student students[30];
    int stdCount = 0;

    char line[100];

    dataFile = fopen("data.txt", "r");
    if(dataFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    while(fgets(line, sizeof(line), dataFile) != NULL){
        if (strlen(line) <= 1){
            continue;
        }
        line[strcspn(line, "\n")] = '\0';
        students[stdCount].studentId = stringToInt(line);

        if (fgets(line, sizeof(line), dataFile) == NULL) break;
        line[strcspn(line, "\n")] = '\0';
        strcpy(students[stdCount].studentName, line);

        fgets(line, sizeof(line), dataFile);
        fgets(line, sizeof(line), dataFile);
        stdCount++;
        fgets(line, sizeof(line), dataFile);
    }

    fclose(dataFile);

    FILE *repeatFile;
    repeatFile = fopen("repeat.txt", "w");

    int processed[30] = {0};
    int found = 0;

    for(int i=0; i<stdCount; i++){
        if(processed[i] == 1){
            continue;
        } 
        int count = 0;
        for(int j=0; j<stdCount; j++){
            if(strcmp(students[i].studentName, students[j].studentName) == 0){
                count++;
            }
        }

        if(count > 1){
            int first = 1;
            for(int j=0; j<stdCount; j++){
                if(strcmp(students[i].studentName, students[j].studentName) == 0){
                    if(first == 0){
                        fprintf(repeatFile, ", ");
                    }
                    fprintf(repeatFile, "%d", students[j].studentId);
                    first = 0;
                    processed[j] = 1;
                }
            }
            fprintf(repeatFile, " %s", students[i].studentName);
            fprintf(repeatFile, "\n");
            found = 1;
        }
    }

    fclose(repeatFile);

    printf("Repeated names written to repeat.txt\n");
    return 0;
}