/*
    Operators
    Operators are used to perform operations on variables and values.
    The values and variables used with operators are called operands.
    Unary, Binary and Ternary Operators
    On the basis of the number of operands they work on,
    operators can be classified into three types :

    Unary Operators: Operators that work on single operand.
        Example: Increment( ++ ) , Decrement( -- )
    Binary Operators: Operators that work on two operands.
        Example: Addition ( + ), Subtraction( - ) , Multiplication ( * )
    Ternary Operators: Operators that work on three operands.
        Example: Conditional Operator( ? : )


    Types of Operators in C
    C language provides a wide range of built in operators that can 
    be classified into 6 types based on their functionality:

    1. Arithmetic Operators
    The arithmetic operators are used to perform arithmetic/mathematical 
    operations on operands. There are 9 arithmetic operators in C language:
        +, -, *, /, %, +a, -a, a++, a--
    2. Assignment Operators
    Assignment operators are used to assign value to a variable.
        =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=
    3. Relational Operators
    Relational Operators (Comparison operators) are used to compare two values (or variables).
        ==, !=, >, <, >=, <=
    4. Logical Operator
    Logical Operators are used to combine two or more conditions/constraints or to 
    complement the evaluation of the original condition in consideration. The result of 
    the operation of a logical operator is a Boolean value either true or false.
        && || !
    5. Bitwise Operator
    The Bitwise operators are used to perform bit-level operations on the operands. 
    The operators are first converted to bit-level and then the calculation is 
    performed on the operands.
        &, |, ^, ~, <<, >>

    6. Other Operators
    sizeof Operator, Comma Operator ( , ), Conditional Operator ( ? : ), dot (.) and 
    arrow (->) Operators, Cast Operators, addressof (&) and Dereference (*) Operators
        sizeof (operand); operand1 , operand2; expression1 ? Expression2 : Expression3;
        The dot operator is applied to the actual object. 
        The arrow operator is used with a pointer to an object.
        structure_variable . member;
        structure_pointer -> member;
        (new_type) operand;



    Operator Precedence and Associativity in C
    Here are some common operators in C, from highest to lowest priority:
        ()             Parentheses
        *, /, %        Multiplication, Division, Modulus
        +, -           Addition, Subtraction
        >, <, >=, <=   Comparison
        ==, !=         Equality
        &&             Logical AND
        ||             Logical OR
        =              Assignment
*/