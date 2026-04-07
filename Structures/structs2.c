/*
    ### C typedef:
    The typedef keyword is used to define an alias for the already existing datatype. In structures,
    we have to use the struct keyword along with the structure name to define the variables.
    Sometimes, this increases the length and complexity of the code.
    We can use the typedef to define some new shorter name for the structure.
*/

#include <stdio.h>
#include <string.h>

// Defining structure
// typedef struct {
//     char name[50];
//     int age;
// } Student;

// int main(){
//     Student s1;     //  no need to write "struct"
//     strcpy(s1.name, "Mohammad");
//     s1.age = 21;
//     printf("%s\t%d", s1.name, s1.age);
//     return 0;
// }


/*
    C Nested Structures:
    A structure can also contain another structure as a member.
    This is called a nested structure, and it is useful when
    you want to group related data together in layers:

    There are two ways in which we can nest one structure into another:
    1. Embedded Structure Nesting:
        The structure being nested is also declared inside the parent structure.
    2. Separate Structure Nesting:
        Two structures are declared separately and then the member
        structure is nested inside the parent structure.
*/

// struct Owner {
//     char firstName[20];
//     char lastName[20];
// };

// struct Car {
//     char brand[30];
//     int year;
//     struct Owner owner; // Nested structure
// };

// int main(){
//     // struct Owner person = {"John", "Doe"};
//     // struct Car car1 = {"Toyota", 2010, person};
//     struct Car car1 = {"Toyota", 2010, "John", "Doe"};

//     printf("%s %d\n", car1.brand, car1.year);
//     // printf("%s %s\n", person.firstName, person.lastName);
//     printf("%s %s\n", car1.owner.firstName, car1.owner.lastName);
//     return 0;
// }


/*
    C Structs and Pointers:
    You can use pointers with structs to make your code more efficient,
    especially when passing structs to functions or changing their values.
    To use a pointer to a struct, just add the * symbol, like you would with other data types.
    To access its members, you must use the -> operator instead of the dot . syntax.
*/

// struct Car{
//     char brand[30];
//     int year;
// };

// int main(){
//     struct Car car = {"Toyota", 1998};
//     //  Declare a pointer to the struct
//     struct Car *ptr = &car;
//     //  Access members using the -> operator
//     printf("%s\n", ptr->brand);
//     printf("%d\n", ptr->year);
//     return 0;
// }


/*
    Passing Struct Pointers to Functions:
*/

// struct Car {
//     char brand[30];
//     int year;
// };
// //  Function that takes a pointer to a Car struct and updates the year
// void updateYear(struct Car *c){
//     c->year = 2025; //  Change the year
// }

// int main(){
//     struct Car myCar;
//     strcpy(myCar.brand, "Toyota");
//     myCar.year = 2020;
//     updateYear(&myCar); //  Pass a pointer so the function can change the year
//     printf("%s\t%d", myCar.brand, myCar.year);
//     return 0;
// }