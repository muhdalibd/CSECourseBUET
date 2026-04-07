/*
    1. Student Structure Operations
    Create a structure called "Student" with members name, age, and total marks.
    Write a C program to input data for two students, display their information,
    and find the average of total marks.
*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int age;
    int marks;
};

int main(){
    struct Student s1;
    struct Student s2;

    // strcpy(s1.name, "Adib");
    // s1.age = 21;
    // s1.marks = 97;
    // strcpy(s2.name, "Rifat");
    // s2.age = 22;
    // s2.marks = 91;

    printf("Details of Student 1:\n");
    printf("Name : ");
    scanf("%s", s1.name);
    printf("Age : ");
    scanf("%d", &s1.age);
    printf("Marks : ");
    scanf("%d", &s1.marks);
    
    printf("Details of Student 2:\n");
    printf("Name : ");
    scanf("%s", s2.name);
    printf("Age : ");
    scanf("%d", &s2.age);
    printf("Marks : ");
    scanf("%d", &s2.marks);

    printf("\nList of Students:\n");
    printf("%s\t%d\t%d\n", s1.name, s1.age, s1.marks);
    printf("%s\t%d\t%d\n", s2.name, s2.age, s2.marks);

    int avgMarks = (s1.marks + s2.marks)/2;
    printf("\nTheir average marks: %d", avgMarks);
    
    return 0;
}