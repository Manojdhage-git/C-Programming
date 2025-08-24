/*Program to understand the use of 
postfix increment/decrement*/

#include<stdio.h>
int main()
{
	int x=8;
	printf("x=%d \t", x);
	printf("x=%d \t", x++);	/*postfix increment*/
	printf("x=%d \t", x);
	printf("x=%d \t", x--);	/*postfix decrement*/
	printf("x=%d \n", x);
	return 0;
}

// Output
// x=8    x=8    x=9    x=9    x=8
