#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 120

// (a) Enums and Structs
typedef enum {
    REGULAR,
    INCOMPLETE,
    WITHDRAWN
} StudentGroup;

typedef struct {
    float sectionA; // Out of 105
    float sectionB; // Out of 105
} TermFinal;

typedef struct {
    char studentID[20];
    char name[50];
    float ctMarks[4];
    float attendancePercentage;
    TermFinal finalExam;
    StudentGroup group;
} Student;

// (b) Function ctMarks
float ctMarks(const Student *s) {
    float min = s->ctMarks[0];
    float sum = s->ctMarks[0];
    
    for (int i = 1; i < 4; i++) {
        sum += s->ctMarks[i];
        if (s->ctMarks[i] < min) {
            min = s->ctMarks[i];
        }
    }
    return sum - min;
}

// (c) Function computeFinalScore
float computeFinalScore(const Student *s) {
    // Best 3 CTs scaled to 20% (Assuming each CT is out of 10, total 30)
    // Adjust maximums depending on classroom grading policies
    float ctWeight = (ctMarks(s) / 30.0f) * 20.0f; 
    
    // Attendance scaled to 10%
    float attendanceWeight = (s->attendancePercentage / 100.0f) * 10.0f;
    
    // Term Final scaled to 70% (Total marks = 105 + 105 = 210)
    float totalFinal = s->finalExam.sectionA + s->finalExam.sectionB;
    float finalWeight = (totalFinal / 210.0f) * 70.0f;
    
    return ctWeight + attendanceWeight + finalWeight;
}

// (d) Function statistics
void statistics(const Student students[], int size) {
    if (size <= 0) return;

    int regularCount = 0;
    float totalAttendance = 0;
    float totalCT[4] = {0, 0, 0, 0};
    float totalSecA = 0;
    float totalSecB = 0;
    float totalFinalScore = 0;

    for (int i = 0; i < size; i++) {
        if (students[i].group == REGULAR) {
            regularCount++;
            totalAttendance += students[i].attendancePercentage;
            totalSecA += students[i].finalExam.sectionA;
            totalSecB += students[i].finalExam.sectionB;
            totalFinalScore += computeFinalScore(&students[i]);
            
            for (int j = 0; j < 4; j++) {
                totalCT[j] += students[i].ctMarks[j];
            }
        }
    }

    float regularPercentage = ((float)regularCount / size) * 100.0f;
    printf("Percentage of Regular Students: %.2f%%\n", regularPercentage);

    if (regularCount > 0) {
        printf("Average Attendance: %.2f%%\n", totalAttendance / regularCount);
        for (int j = 0; j < 4; j++) {
            printf("Average CT %d Marks: %.2f\n", j + 1, totalCT[j] / regularCount);
        }
        printf("Average Section A Marks: %.2f\n", totalSecA / regularCount);
        printf("Average Section B Marks: %.2f\n", totalSecB / regularCount);
        printf("Average Final Score Percentage: %.2f%%\n", totalFinalScore / regularCount);
    } else {
        printf("No regular students found for average statistics calculations.\n");
    }
}
