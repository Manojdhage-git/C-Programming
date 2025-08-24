/* Program to understand logical/boolean operators*/
#include <stdio.h>

int main()
{
    int a=40, b=20;
    int c=20, d=30;
    if (a>b && a !=0)
    {
        printf("&& Operator : Both conditions are true \n");
    }
    if (c>d || d!=20)
    {
        printf("|| Operator : Only one condition is true \n");
    }
    if (!(a>b && a !=0))
    {
        printf("! Operator : Both conditions are true \n");
    }
    else
    {
        printf("! Operator : Both conditions are true. But, status is inverted as false");
    }
    return 0;
}

/*  if (a && b){
        printf("\na && b");
    }
    
    if (a && 0){
        printf("\na && 0");
    }
    
    if (a || 0){
        printf("\na || 0");
    }
*/
// output
// && Operator : Both conditions are true
// || Operator : Only one condition is true
// ! Operator : Both conditions are true. But, status is inverted as false
// Relational operators: <, >, <=, >=, ==, !=
// Logical/Boolean operators: &&, ||, !
// Bitwise operators: &, |, ^, ~, <<, >>
// Assignment operators: =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=
// Misc operators: sizeof, comma(,), conditional(?:)
// Arithmetic operators: +, -, *, /, %, ++, --
// Ternary operator: (condition) ? expression1 : expression2
// Operator precedence: https://en.cppreference.com/w/c/language/operator_precedence
// Operator associativity: https://en.cppreference.com/w/c/language/operator_precedence#Associativity
// Note: All operators have left to right associativity except for assignment operators and the ternary operator which have right to left associativity.
// Note: In C, any non-zero value is considered true, and zero is considered false.
// Note: Logical operators (&&, ||, !) work with boolean values (true/false), while bitwise operators (&, |, ^, ~) work with individual bits of integer values.
// Note: Logical operators short-circuit, meaning they stop evaluating as soon as the result is determined. Bitwise operators always evaluate both operands.
// Note: The conditional (ternary) operator is a shorthand for an if-else statement and is right associative.
// Note: The sizeof operator returns the size of a data type or variable in bytes.
// Note: The comma operator evaluates two expressions and returns the value of the second expression.


// commoa operator example
/* 
#include <stdio.h>
int main() {
    int a = 5, b = 10, c;
    c = (a += 2, b += 3); // a is incremented by 2, b is incremented by 3, c gets the value of b
    printf("a: %d, b: %d, c: %d\n", a, b, c); // Output: a: 7, b: 13, c: 13
    return 0;
}
*/