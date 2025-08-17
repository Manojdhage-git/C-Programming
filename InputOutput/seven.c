#include <stdio.h>

int main()
{
    char str[10];
    scanf("%3s",str);
    printf("%s",str);
    return 0;
}

// This code reads a string from the input and prints it to the output.
// The string is stored in a character array of size 10, but only the first
// 3 characters are read to prevent buffer overflow. This is a safer way to handle input.
// The scanf format specifier "%3s" limits the input to 3 characters, leaving space for the null terminator.
// The output is printed using printf with the format specifier "%s" to display the string.
// The code ensures that the input does not exceed the size of the character array, preventing potential buffer overflow issues.
// The code is written in C11 standard, which is suitable for modern C programming practices.
// The program returns 0 to indicate successful execution.