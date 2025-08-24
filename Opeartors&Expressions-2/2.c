#include<stdio.h>
int main()
{
	int a,b ;
	printf("Enter values for a and b : ");
	scanf("%d%d",&a,&b);

	if(a=b)
  	{ 
  	    printf("Assignment operator");
  	    printf("\n%d", a=b);
  	}
	
	return 0;}

// Note : Here in if condition we have used assignment operator instead of relational operator
// So the value of a is assigned to b and then the condition is checked
// output will be non zero value as a=b will give value of a
// Hence the if condition will be true and the statements inside if block will be executed

// If we use relational operator like if(a==b) then the condition will be false and the statements inside if block will not be executed