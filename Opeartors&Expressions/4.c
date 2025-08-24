#include <stdio.h>
// Assignment Operators
// =, +=, -=, *=, /=, %=

int main()
{   
    int x,y,z,t;
    x=5, y=6, z=x+y*2, t=x;
    
    printf("\n x:%d,y=%d,z=%d,t=%d",x,y,z,t);
    
    x,y,z=10;
    x=y=z=10;
    
    x = x+5;
    x += 5;
    
    y*=5;
    z/=2;
    x%=5;
    
    printf("\n x:%d,y=%d,z=%d,t=%d",x,y,z,t);

    return 0;
}

// Output
// x:5,y=6,z=17,t=5 