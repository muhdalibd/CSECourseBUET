#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validEmail(char email[]) {

    // Convert email to lowercase
    int i = 0;
    while(email[i] != '\0') {
        email[i] = tolower(email[i]);
        i++;
    }

    // Required domain
    char domain[] = "@ipe.buet.ac.bd";

    int emailLen = strlen(email);
    int domainLen = strlen(domain);

    // Email must be at least as long as domain
    if(emailLen < domainLen) {
        return 0;
    }

    // Compare ending part
    if(strcmp(email + emailLen - domainLen, domain) == 0) {
        return 1;
    }

    return 0;
}

int validID(char id[]) {

    // ID length must be 9
    if(strlen(id) != 9) {
        return 0;
    }

    // All characters must be digits
    for(int i = 0; i < 9; i++) {
        if(id[i] < '0' || id[i] > '9') {
            return 0;
        }
    }

    // First two digits must be 20
    if(id[0] != '2' || id[1] != '0') {
        return 0;
    }

    // 5th and 6th digits must be 08
    if(id[4] != '0' || id[5] != '8') {
        return 0;
    }

    // Last three digits less than 121
    int lastThree = (id[6] - '0') * 100 +
                    (id[7] - '0') * 10 +
                    (id[8] - '0');

    if(lastThree >= 121) {
        return 0;
    }

    return 1;
}

int main() {

    FILE *fin = fopen("students.txt", "r");
    FILE *fvalid = fopen("valid.txt", "w");
    FILE *finvalid = fopen("invalid.txt", "w");
    FILE *fsummary = fopen("summary.txt", "w");

    // File open check
    if(fin == NULL || fvalid == NULL || finvalid == NULL || fsummary == NULL) {
        printf("File opening error\n");
        return 1;
    }

    char line[200];

    int total = 0;
    int valid = 0;
    int invalid = 0;

    while(fgets(line, sizeof(line), fin) != NULL) {

        // Remove newline
        line[strcspn(line, "\n")] = '\0';

        char original[200];
        strcpy(original, line);

        // Split line using comma
        char *name = strtok(line, ",");
        char *id = strtok(NULL, ",");
        char *email = strtok(NULL, ",");

        // Skip bad lines
        if(name == NULL || id == NULL || email == NULL) {
            continue;
        }

        // Remove leading spaces
        while(*id == ' ') {
            id++;
        }

        while(*email == ' ') {
            email++;
        }

        total++;

        int emailOK = validEmail(email);
        int idOK = validID(id);

        if(emailOK && idOK) {

            fprintf(fvalid, "%s\n", original);
            valid++;

        } else {

            fprintf(finvalid, "%s -> ", original);

            if(!emailOK && !idOK) {
                fprintf(finvalid, "Invalid Email and Invalid ID\n");
            }
            else if(!emailOK) {
                fprintf(finvalid, "Invalid Email\n");
            }
            else {
                fprintf(finvalid, "Invalid ID\n");
            }

            invalid++;
        }
    }

    // Percentage calculation
    double validPercent = 0;
    double invalidPercent = 0;

    if(total > 0) {
        validPercent = (valid * 100.0) / total;
        invalidPercent = (invalid * 100.0) / total;
    }

    // Summary file
    fprintf(fsummary, "Total Students: %d\n", total);
    fprintf(fsummary, "Valid Records: %d\n", valid);
    fprintf(fsummary, "Invalid Records: %d\n", invalid);
    fprintf(fsummary, "Valid Percentage: %.2lf%%\n", validPercent);
    fprintf(fsummary, "Invalid Percentage: %.2lf%%\n", invalidPercent);

    fclose(fin);
    fclose(fvalid);
    fclose(finvalid);
    fclose(fsummary);

    printf("Processing Complete\n");

    return 0;
}