#include<stdio.h>
int main()
{   
    int a = 2;
    int p = (2<10)&&(a=4);
    printf("a=%d \t",a);
    
    int b = 2;
    p = (2>10)&&(b=4);
    printf("b=%d \t",b);
    
    int c =2, d = 2;
    p = (2>10)&&(c=4)&&(d=4);
    printf("c=%d \t d=%d \t",c,d);
    
    return 0;
}

// output
// a=4     b=2     c=2     d=2

/* Program to understand logical/boolean operators*/