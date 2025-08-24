#include<stdio.h>
int main()
{
	int a=10;
	int b,c;
	b = ++a;
	c = a++;
	b--;
	--c;
	b-=c;
	printf("%d",b);
	return 0;
}


//output: -1