#include <stdio.h>
int main()
{
    int i = 12;
    int j = sizeof(++i);
    printf("%d  %d", i, j);
    return 0;
}


// Here sizeof is a compile time operator so ++i will not be executed. So i will remain 12 and j will be size of int that is 4 bytes.
// If sizeof is not there then ++i will be executed and i will become 13.