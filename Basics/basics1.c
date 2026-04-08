/*
    C Language Introduction
    C is a general-purpose mid-level programming language developed by 
    Dennis M. Ritchie at Bell Laboratories in 1972.
    It was initially used for the development of UNIX operating system, 
    but it later became popular for a wide range of applications.

    C is considered mother of all programming languages as many later languages like Java, 
    PHP and JavaScript have borrowed syntax/features directly or indirectly from the C.
    Learning C programming first helps to learn any modern programming language as 
    it provide a deeper understanding of the fundamentals of programming and 
    operating system with features like pointers.
    C is widely used in operating systems, embedded systems, compilers, databases, 
    networking, game engines and real-time systems for its efficiency to work in 
    low resource environment and hardware-level support.

    C is a general-purpose procedural programming language known for its efficiency 
    and low-level memory access.
    C is a procedural language, meaning it follows a step-by-step sequence of 
    instructions and functions to solve problems.
*/

/*
    What is Program ?
    A Computer program is a sequence of instructions written to perform a specified task with a computer.
*/

#include <stdio.h>  //  Header file
/*
    All lines that start with # are processed by a preprocessor which is a program 
    invoked by the compiler. It handles lines starting with # and 
    copies header file contents into the source file.
    stdio stands for 'Standard Input Output,' which contains the declarations for printf and scanf.

    The next part of the C program is the main() function. It is the entry point of a C program. 
    The empty brackets indicate that the main doesn't take any parameter. 
    The int that was written before the main indicates the return type of main() 
    and the value returned by the main indicates the status of program termination.
    A pair of curly brackets define the body of a function. 
    All functions must start and end with curly brackets.

    Statements are the instructions given to the compiler. 
    In C, a statement is always terminated by a semicolon (;).
*/
int main(){     //  Main Function
    printf("Hello, World!");    //  Statement
    return 0;   //  Return 
}



/*
    Compilation Process of C Programs
    The compilation is the process of converting the source code of the C language 
    into machine code. As C is a mid-level language, it needs a compiler to convert it 
    into an executable code so that the program can be run on our machine.
    Steps to Compile and Run a C Program
        Source Code --> Prepocessor --> Compiler --> Assembler --> Linker
    Step 1: Create Source File
        ni filename.c
    Step 2: Compile using GCC Compiler
        gcc filename.c –o filename
    Step 3: Execute Program
        ./filename // for linux
        filename // for windows
    Compilation Process
        1. Pre-processing
        2. Compilation
        3. Assembly
        4. Linking


        & many more !
*/