/*Program to interchange the value of two variables using comma operator*/
#include<stdio.h>
int main()
{
 	int a=8,b=7,temp;
	printf("a=%d, b=%d\n", a, b);
	temp=a,a=b,b=temp;
	printf("a=%d, b=%d\n",a,b);
	return 0;
}


// output
// a=8, b=7
// a=7, b=8
// Note: The comma operator evaluates the left operand first, then the right operand, and returns the value of the right operand.
