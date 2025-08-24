#include <stdio.h>
int main()
{
    printf("%d", sizeof(printf("Accenture")));

    printf("%d", printf("Yash"));
// output: 4 printf("yesh") returns 4
// output: 9 printf("Accenture") returns 9
    return 0;
}



// Output: 4
// Explanation: Here, the inner printf function prints "Accenture" and returns the number of characters printed, which is 9. The outer printf function then prints this return value (9) and returns the number of characters printed by it, which is 1 (since "9" is a single character). Finally, the sizeof operator calculates the size of the return type of the outer printf function, which is an integer (typically 4 bytes on most systems). Hence, the output is 4.
// Note: The output may vary based on the system architecture (e.g., 4 bytes for 32-bit systems and 8 bytes for 64-bit systems).
// Output: 9