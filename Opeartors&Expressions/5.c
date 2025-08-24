/*Prefix increment/decrement*/
// increment decrement operators

#include<stdio.h>
int main()
{
	int x=8;
	printf("x=%d \t", x);
	printf("x=%d \t", ++x);	/*Prefix increment*/
	printf("x=%d \t", x);
	printf("x=%d \t", --x);	/*Prefix decrement*/
	printf("x=%d \n", x);
	return 0;
}


// Output
// x=8    x=9    x=9    x=8    x=