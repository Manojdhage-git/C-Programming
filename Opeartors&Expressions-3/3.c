#include <stdio.h>
int main()
{
    int i = 5, j = 10, k = 15;
    printf("%d ", sizeof(k = k/ (i + j)));
    printf("%d", k);
    return 0;
}


// Here sizeof is a compile time operator so k = k/ (i + j) will not be executed. So k will remain 15 and sizeof will return size of int that is 4 bytes.
// If sizeof is not there then k = k/ (i + j) will be executed and k will become 0.
// Note: sizeof operator always returns size in bytes.