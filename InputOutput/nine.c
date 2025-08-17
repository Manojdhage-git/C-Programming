#include <stdio.h>

int main()
{
    char str[10];
    scanf("%s",str);
    printf("%8.3s",str);
    return 0;
}

// This code reads a string from input and prints the first three characters of the string,
// right-aligned in a field of width 8. If the string is shorter than 8 characters, it will be padded with spaces on the left.
// The format specifier "%8.3s" means that the output will be right-aligned in a field of width 8, and only the first 3 characters of the string will be printed.
// The output will look like this if the input is "Hello":  
// "   Hel"