/* Program to print the larger of two numbers
using conditional operator */

#include<stdio.h>
int main()
{
 	int x,y,max;
	printf("Enter values for x and y :");
	scanf("%d%d",&x,&y);
	max= x>y ? x : y;
	printf("Larger of %d and %d is %d", x, y, max);
	return 0;
}


// output
// Enter values for x and y :10 20
// Larger of 10 and 20 is 20
// Note: The conditional (ternary) operator is a shorthand for an if-else statement and is right associative.