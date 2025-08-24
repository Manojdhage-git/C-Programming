#include<stdio.h>
int main()
{   int a,b,c,d,e,f,g,h,k;
    a=8, b=4, c=2, d=1, e=5, f=20;
    printf("%d \t", a+b-(c+d)*3%e+f/9);
    
    a=17, b=5, c=6, d=3, e=5;
    printf("%d \t", a%6-b/2+(c*d-5)/e);
    
    a=4, b=5, c=6, d=3, e=5, f=10;
    printf("%d \t", a*b-c/d<e+f);
    
    a=8, b=5, c=8, d=3, e=65, f=10, g=2, h=5, k=2;
    printf("%d \t", a-b+c/d==e/f-g+h%k);
    
    a=8, b=3, c=2, d=3, e=2, f=11;
    printf("%d \t", a-b||(a-b*c)+d&&e-f%3);

	return 0;
}

// Output: 6 	 6 	 1 	 0 	 1
// Explanation: The code evaluates several arithmetic and logical expressions using the given integer variables and prints the results. Each expression is computed step-by-step according to operator precedence and associativity rules in C. The final output consists of the results of these expressions separated by tabs.
// Note: The output may vary based on the specific values assigned to the variables and the order of operations.

// Precedence and Associativity of Operators in C:
// 1. Parentheses () - Highest precedence
// 2. Unary operators: +, -, !, ~ (Right to Left)
// 3. Multiplicative operators: *, /, % (Left to Right)
// 4. Additive operators: +, - (Left to Right)
// 5. Relational operators: <, <=, >, >= (Left to Right)
// 6. Equality operators: ==, != (Left to Right)  
// bitwise operators: & (AND), | (OR), ^ (XOR) (Left to Right)  
// 7. Logical AND: && (Left to Right)
// 8. Logical OR: || (Left to Right)
// ternary operator: ? : (Right to Left)
// 9. Assignment operators: =, +=, -=, *=, /=, %= (Right to Left) - Lowest precedence
// comma operator: , (Left to Right) - Lowest precedence

// Note: Operators with the same precedence level are evaluated based on their associativity (either Left to Right or Right to Left).
// The expressions in the code are evaluated according to these rules, resulting in the final output.

// shortcut to remember precedence and associativity of operators in C:
// PUMA'S REBL TAC