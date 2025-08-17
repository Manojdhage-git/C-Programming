#include <stdio.h>

int main()
{
    float a,b;
    scanf("%3f%4f",&a,&b);
    printf("a=%f b=%f",a,b);

    return 0;
}
// The above code reads two floating-point numbers from input and prints them.
// The scanf format string "%3f%4f" reads the first three characters for `a` and the next four characters for `b`.
// The printf function formats the output of `a` and `b` as floating-point numbers
// with default precision. This can be useful for controlling how input is parsed and how output is formatted, especially in scenarios where specific input lengths are required.
// The code can be modified to read the floating-point numbers with different widths, for example:  
// scanf("%5f%6f",&a,&b); would read the first five characters for `a` and the next six characters for `b`.
// This is useful in competitive programming or formatted output scenarios where input and output formats are crucial.
// The scanf format string "%3f%4f" is particularly useful when you want to limit the number of characters read for each floating-point number, ensuring that the input adheres to specific constraints.
// The printf function can also be modified to control the number of decimal places displayed, for example