/*Program to print the value and address of elements of an array using pointer notation*/

#include<stdio.h>
int main()
{
	int a[5]={5,10,15,20,25};
	int i;
	for(i=0; i<5; i++)
	{
		printf("Value of a[%d] = %d\t",i,*(a+i));
		printf("Address of a[%d] = %p\n",i,a+i);
	}
	return 0;
}

