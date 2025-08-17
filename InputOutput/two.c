#include <stdio.h>

int main()
{
    int a,b;
    scanf("%2d%3d",&a,&b);
    printf("%d %d",a,b);

    return 0;
}

//explanation:
// The program reads two integers from input, where the first integer is expected to be 2 digits and the second integer is expected to be 3 digits.
// It then prints these integers separated by a space.
// The format specifier %2d reads up to 2 digits, and %3d reads up to 3 digits from the input.
// For example, if the input is "12 345", the output will be "12 345".  