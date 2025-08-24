#include <stdio.h>

int main()
{
    int x=9, y=2;
    float z=2.0;
    
    printf("\n 9/2: %f", x/y);
    printf("\n 9/2: %d", x/y);
    printf("\n 9/2.0: %f", x/z);
    
    return 0;
}

/*Output:
 9/2: 4.000000
 9/2: 4
 9/2.0: 4.500000 */