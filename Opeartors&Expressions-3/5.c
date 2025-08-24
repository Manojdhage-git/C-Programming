#include<stdio.h>
int main()
{   
    int a = 20;
    int b = 10;
    int c = a&b;
    int d = a|b;
    int e = a^b;
    
    printf("c=%d \t d=%d \t e=%d",c,d,e);
    
    return 0;
}


// Output: c=0 	 d=30 	 e=30