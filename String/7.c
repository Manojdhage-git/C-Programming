#include<stdio.h>
int main()
{
	char str[] = "yash";
	int i;
	for(i=0; str[i]; i++)
		printf("\n%c%c%c%c", str[i], *(str+i), *(i+str), i[str]);
	return 0;
}

