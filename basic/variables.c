#include<stdio.h>    
int main()
{    
const int salary = 45000;     
salary = 50000;    
printf("The value of salary is: %d",salary);    
    return 0;  
}     
// This code will not compile because 'salary' is declared as a constant
// and cannot be modified after its initial assignment.