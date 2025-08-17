#include <stdio.h>

int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    printf("a=%4.1f b=%7.2f",a,b);
    return 0;
}

// Output: a= 1.2 b= 34.56
// Input: 1.2 34.56
// Note: The scanf format specifier has been changed to "%3f%4f" in the input file.
// This change is to ensure that the input values are read correctly as per the new format.
// The output format remains the same, displaying 'a' with one decimal place and 'b' with two decimal places.
// The input file has been updated to reflect the new scanf format specifier.
// The input file now expects two floating-point numbers with specific widths.