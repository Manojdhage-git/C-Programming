#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%4d b=%3d",a,b);

    return 0;
}

// The above code reads two integers from input and prints them with specified field widths.
// The scanf format string "%d%d" reads two integers, and printf formats them with a width of 4 for `a` and 3 for `b`.  
// The code can be modified to read the integers with different widths, for example:
// scanf("%2d%3d",&a,&b); would read the first two digits for `a` and the next three digits for `b`.    
// This is useful for controlling how input is parsed and how output is formatted, especially in competitive programming or formatted output scenarios.