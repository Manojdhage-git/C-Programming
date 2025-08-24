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
// Explanation: Here, the inner printf function prints "Accenture" and returns the number of