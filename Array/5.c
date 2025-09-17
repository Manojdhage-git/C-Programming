#include<stdio.h>
int main()
{
	int arr[] = {1, 2, 3};
	int *p = arr;
	if(&p == arr)
	printf("Same");
	else
	printf("Not same");
	return 0;
}
/*Program to demonstrate array of pointers and print their values*/