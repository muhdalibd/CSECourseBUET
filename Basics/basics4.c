/*
    Data Types in C
    Each variable in C has an associated data type.
    C is a statically type language where each variable's type must be 
    specified at the declaration and once specified, it cannot be changed.

    Data Types in C
    1. Basics Data Types    => int, float, double, char, bool, void
    2. Derived Data Types   => array, pointer, fuction
    3. User Defined Data Types => structure, union, enum

    Integer Data Type
    Stores whole numbers (positive, negative, or zero).
    We use int keyword to declare the integer variable:
    Size: typically 4 bytes,
    Range: -2,147,483,648 to 2,147,483,647.
    Format specifier: %d or %i.
    Format specifiers are the symbols that are used for printing and 
    scanning values of given data types. like => %s for String

    Character Data Type
    Stores a single character (like ‘A’, ‘b’, or ‘5’).
    Size: typically 1 byte, 
    Range: -128 to 127 (signed by default).
    Format specifier: %c

    Float Data Type
    Stores decimal numbers (numbers with fractional part).
    Size: typically 4 bytes, 
    Approximate range: 3.4e-38 to 3.4e+38.
    Format specifier: %f or %F.

    Double Data Type
    Stores decimal numbers with more precision than float.
    Size: typically 8 bytes, 
    Approximate range: 1.7e-308 to 1.7e+308.
    Format specifier: %lf.

    float vs. double
    The precision of a floating point value indicates how many digits the value 
    can have after the decimal point. The precision of float is six or seven decimal 
    digits, while double variables have a precision of about 15 digits.

    Void Data Type
    Represents no value or empty type.
    Used in functions that do not return any value.
    Can also be used for generic pointers (void *) in memory operations.

    Scientific Numbers
    In C, you can write very large or very small floating-point numbers using scientific notation.
    This is done using the letter e (or E), which stands for "times 10 to the power of".
    For example, 35e3 means 35 × 10³ = 35000.   => float num = 35e3;


    Set Decimal Precision
    If you want to remove the extra zeros (set decimal precision), 
    you can use a dot (.) followed by a number that specifies how many digits 
    that should be shown after the decimal point:
    printf("%.2f", myVar);  // a float variable with only 2 decimal places


    Size of Data Types in C
    C language provides the sizeof() operator to check the size of the data types.
    Note that we use the %zu format specifier to print the result, instead of %d. 
    This is because the compiler expects the sizeof operator to return 
    a value of type size_t, which is an unsigned integer type. On some computers 
    it might work with %d, but it is safer and more portable to use %zu, 
    which is specifically designed for printing size_t values.

    
    C Extended Types



    Type Conversion in C
    In C, type conversion refers to the process of converting one data type to another.
    It can be done automatically by the compiler or manually by the programmer.
    The type conversion is only performed to those data types where conversion is possible.
    There are two types of conversion in C:
    1. Implicit Conversion (automatically)
        Implicit conversion is done automatically by the compiler when 
        you assign a value of one type to another.
    2. Explicit Conversion (manually)
        Explicit conversion is done manually by placing the type in 
        parentheses () in front of the value.
*/

#include <stdio.h>
/*
    C Booleans
    It was introduced in C99, and you must include the following header file to use it:
    #include <stdbool.h>
*/
#include <stdbool.h>

int main(){
    // Implicit Conversion
    int myInt = 9.99;
    printf("%d\n", myInt);
    float sum1 = 5 / 2;
    printf("%f\n", sum1);    //  2.000000

    // Explicit Conversion
    float sum2 = (float) 5 / 2;
    printf("%f\n", sum2);    //  2.500000
    

    // C Booleans
    bool isStudent = false;
    if(isStudent){
        printf("You are enrolled.");
    } else{
        printf("You are not enrolled.");
    }

    return 0;
}


