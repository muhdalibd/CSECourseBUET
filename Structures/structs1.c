/*
    • C Structures (structs)
    In C, a structure is a user-defined data type that can be used to group
        items of possibly different types into a single type.
    
    • The struct keyword is used to define a structure. The items in the structure are
    called its members and they can be of any valid data type.
    Applications of structures involve creating data structures Linked List and Tree.
    Structures are also used to represent real world objects in a software
        like Students and Faculty in a college management software.
*/

#include <stdio.h>
#include <string.h>

// // • Defining a structure
// struct Student {    //  Keyword + Structure Name
//     char name[100]; //  String
//     int age;        //  Member or Fields of Structures
//     char hobby[100];
// };
// //   • To access the structure, you must create a variable of it.
// int main(){
//     // • Creating a structure variable
//     struct Student s1;
//     // • Initializing member
//     // s1.name = "Some text";  //  ERROR
//     s1.age = 21;
    
//     // • Trying to assign a value to the string
//     // • There is a solution for this! You can use the strcpy() function
//     strcpy(s1.name, "Mohammad Ali Hasan");
//     strcpy(s1.hobby, "Reading");

//     printf("%s\n", s1.name);
//     printf("%d\n", s1.age);
//     printf("%s\n", s1.hobby);
//     return 0;
// }



/*
    We can initialize structure members in 4 ways which are as follows:
    1. Default Initialization  <--> (1 & 2)
    (a) Initialization using Initializer List
        struct structure_name str = {value1, value2, value3 ....};
    (b) Initialization using Designated Initializer List
        struct structure_name str = { .member1 = value1, .member2 = value2, .member3 = value3 };
    2. Copy Structure
        s2 = s1;
    3. Passing Structure to Functions
    4. typedef for Structures
*/



// struct Student {
//     char name[50];
//     int stdAge;
//     char hobby[50];
// };

// int main(){
//     // • Create a structure variable and assign values to it
//     struct Student s1 = {"Nabil", 22, "Coding"};
//     // • Designated Initializing another structure
//     struct Student s3 = {.hobby = "Fishing", .name = "Monir", .stdAge = 21};
//     struct Student s2;
//     // Copy Structures
//     s2 = s1;
//     // Modify Values
//     s1.stdAge = 25;
//     strcpy(s2.name, "Kabir");

//     printf("%d\n", s1.stdAge);
//     printf("%s\n", s2.name);
//     printf("%s\n", s3.hobby);
//     return 0;
// }


// • Real-Life Example

// struct Car {
//   char brand[30];
//   char model[30];
//   int year;
// };

// int main() {
//   struct Car car1 = {"BMW", "X5", 1999};
//   struct Car car2 = {"Ford", "Mustang", 1969};
//   struct Car car3 = {"Toyota", "Corolla", 2011};

//   printf("%s %s %d\n", car1.brand, car1.model, car1.year);
//   printf("%s %s %d\n", car2.brand, car2.model, car2.year);
//   printf("%s %s %d\n", car3.brand, car3.model, car3.year);

//   return 0;
// }