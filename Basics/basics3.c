/*
    Variables in C
    A variable in C is a named piece of memory which is used
    to store data and access it whenever required.
    In C, variables must have a specific type, which tells the program 
    what kind of data the variable can store.
    Declaring (Creating) Variables
    To create a variable, you must specify the type and give the variable a name.
        Syntax
            type variableName = value;

    Accessing Variables
        To print variables in C, you must use something called format specifiers.
        You can think of a format specifier as a placeholder that tells C
        what kind of value will be printed.
        A format specifier always starts with a percentage sign %, followed by a letter.

    Rules for Naming Variables in C
    1. A variable name must only contain letters, digits, and underscores.
    2. It must start with an alphabet or an underscore only. It cannot start with a digit.
    3. No white space is allowed within the variable name.
    4. A variable name must not be any reserved word or keyword.
    5. The name must be unique in the program.
*/

#include <stdio.h>

int main(){
    int num;  // Declare a variable
    num = 15; // Assign a value later

    int myAge = 21;   // Declare and Assign at a time

    // Accessing Variables
    // printf(myAge);  //  This is invalid in C, but valid in C++, Java, Python etc.
    // printf("%d\n", myAge);

    // Changing Stored Values
    myAge = 22;
    // printf("%i\n", myAge);
    int myNum = 15;
    int myOtherNum = 23;
    // Assign the value of myOtherNum (23) to myNum
    myNum = myOtherNum;

    // Declare Multiple Variables
    int x = 5, y = 6, z = 50;
    int a, b, c;
    a = b = c = 50; // assign the same value to multiple variables

    // Print Values Without Variables
    // printf("My favorite number is: %d\n", 15);


    // Memory Allocation of C Variables
    /*
        The size of memory assigned for variables depends on the type of variable. 
        We can check the size of the variables using sizeof operator.
    */
    float gpa = 3.5;
    
    // Finding size of num
    // printf("%d bytes", sizeof(gpa));

    return 0;
}


/*
    The Scope of a Variable in C
    The scope of a variable in C is the block or the region in the program 
    where a variable is declared, defined, and used. Outside this region, 
    we cannot access the variable, and it is treated as an undeclared identifier.
    The scope of an identifier is the part of the program where the 
        identifier may directly be accessible.
    All variables are lexically(or statically) scoped in C which means the scope is 
    defined at the compiler time and not dependent on the caller of the function.

    Global Scope in C
    The global scope refers to the region outside any block or function.
    The variables declared in the global scope are called global variables.
    Global variables are visible in every part of the program.
    Global is also called File Scope as the scope of an identifier starts at 
    the beginning of the file and ends at the end of the file.

    Linkage of Variables in Global Scope
    Global variables have external linkage by default. It means that the variables 
    declared in the global scope can be accessed in another C source file. 
    We have to use the extern keyword for that purpose.
        extern int myVar;
    Note: To restrict access to the current file only, global variables can be marked as static.

    Local Scope in C
    The local scope refers to the region inside a block or a function. 
    It is the space enclosed between the { } braces.
    The variables declared within the local scope are called local variables.
    Local variables are visible in the block they are declared in and 
    other blocks nested inside that block.
    Local variables have no linkage.


    Constants in C
    In C programming, const is a keyword used to declare a variable as constant, 
    meaning its value cannot be changed after it is initialized.
    Syntax:
        const data_type var_name = value;
        const double pi = 3.14159;


    Constants Using #define
    In C, the #define directive can also be used to define symbolic constants 
    that do not require a data type. They are called macros and are replaced 
    by their values at compile time.

    Syntax:
        #define CONSTANT_NAME value
*/