    /********************************************************
    '       Struct in C Programming <--> Bro Code
    *******************************************************/

/*
    ## Struct == A custom container that holds multiple
    '            pieces of related information.
    '            Similar to Objects in other languages
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*

// struct Student {     // first approach
//     char name[50];
//     int age;
//     float gpa;
//     bool isFullTime;
// };

typedef struct {        // second approach
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent(Student student);

int main(){
    // struct Student student1 = {"Spongebob", 30, 2.5, true}; // first approach
    Student student1 = {"Spongebob", 30, 2.5, true}; // second approach
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {"Squidward", 48, 3.2, false};
    // Student student4; // Garbage Value Stored.
    Student student4 = {0};

    strcpy(student4.name, "Sandy");
    // strncpy(student4.name, "Sandy", 4);
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    // printf("%s\n", student1.name);
    // printf("%d\n", student1.age);
    // printf("%.2f\n", student1.gpa);
    // // printf("%d\n", student1.isFullTime); // 1 or 0
    // printf("%s\n", (student1.isFullTime) ? "Yes" : "No");
    // printf("\n");

    // printf("%s\n", student4.name);
    // printf("%d\n", student4.age);
    // printf("%.2f\n", student4.gpa);
    // printf("%s\n", (student4.isFullTime) ? "Yes" : "No");

    // printStudent(student1);
    // printStudent(student2);
    // printStudent(student3);
    // printStudent(student4);
    return 0;
}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full Time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}

*/





    /********************************************************
    '           Array of Structs <--> Bro Code
    *******************************************************/




/*
    Array of Structs == Array where each element contains a struct {}
    '                   Help organize and groups together related data
*/

typedef struct {
    char model[25];
    int year;
    int price;
} Car;

int main(){
    // Car car1 = {"Mustang", 2025, 32000};
    // Car car2 = {"Corvette", 2026, 68000};
    // Car car3 = {"Challenger", 2024, 29000};
    
    // printf("%s %d %d\n", car1.model, car1.year, car1.price);
    // printf("%s %d %d\n", car2.model, car2.year, car2.price);
    // printf("%s %d %d\n", car3.model, car3.year, car3.price);
    
    
    Car cars[] = {
        {"Mustang", 2025, 32000},
        {"Corvette", 2026, 68000},
        {"Challenger", 2024, 29000}
    };

    int numbers = sizeof(cars) / sizeof(cars[0]);

    // for(int i=0; i<numbers; i++){
    //     printf("%s %d %d\n", cars[i].model, cars[i].year, cars[i].price);
    // }

    return 0;
}