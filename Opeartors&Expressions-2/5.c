/* Program to understand logical/boolean operators*/
#include <stdio.h>

int main()
{
    int a=40, b=20;
    int c=20, d=30;
    
    if (a && b){
        printf("\n a && b");
    }
    
    if (a && 0){
        printf("\n a && 0");
    }
    
    if (a || 0){
        printf("\n a || 0");
    }
    
    return 0;
}

// output
//  a && b