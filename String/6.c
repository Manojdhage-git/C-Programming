#include<stdio.h>
int main()
{
	char str[] = "knowledgegate";
	char *s1 = str, *s2 = str;	
	int i;
	for(i = 0; i < 7; i++)
	{
		printf("%c", *str);
		++s1;	
	}
	
	for(i = 0; i < 6; i++)
	{
		printf("%c", *s2);
		++s2;	
	}
	return 0;
}