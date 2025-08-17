#include <stdio.h>

int main()
{
    char str[10];
    scanf("%s",str);
    printf("%5s",str);
    return 0;
}

// The above code reads a string from input and prints it with a minimum width of 5 characters.
// If the input string is shorter than 5 characters, it will be padded with spaces on the left.
// If the input string is longer than 5 characters, it will be printed as is,   
// but only the first 5 characters will be displayed due to the format specifier %5s.
// Note: The input string should not exceed the size of the array to avoid buffer overflow.