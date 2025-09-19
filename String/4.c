#include<stdio.h>
int main()
{
char arr[] = "yash";
char *ptr = arr;

while(*ptr != '\0')
	++*ptr++;
printf("%s %s", arr, ptr);
return 0;
}

