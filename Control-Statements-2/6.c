#include<stdio.h>  
int main()
{
for (int i=0;i<20;i++)
{
    switch(i)
    {
        case 0: 
            i=i+5;
        case 1: 
            i=i+2;
        case 5:
            i=i+5;
        default: 
            i=i+4;
    }
    printf("%d ", i);
}
return 0;
}    

