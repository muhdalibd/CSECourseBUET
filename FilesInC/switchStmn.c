#include <stdio.h>

void week(int n){
    switch (n){
        case 1:
            printf("Satarday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thirsday");
            break;
        case 7:
            printf("Friday");
            break;
        default:
            printf("You enter invalid number.");
            break;
    }
}


float calculator(char ch, float a, float b){
    float result = 0;
    switch(ch){
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        default:
            printf("Invalid Operator");
            break;
    }
    return result;
}



int main(){
    // int n;
    // printf("Enter a number (1-7) : ");
    // scanf("%d", &n);
    // week(n);



    char ch;    // OPERATOR
    printf("Enter a operator (+,-,*,/) : ");
    scanf("%c", &ch);

    float a;    // OPERAND
    printf("Enter first number : ");
    scanf("%f", &a);

    float b;    // OPERAND
    printf("Enter second number : ");
    scanf("%f", &b);

    float ans = calculator(ch, a, b);
    printf("The result is : %.2f", ans);
    return 0;
}