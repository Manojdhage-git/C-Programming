#include<stdio.h>
int main()
{
char str[]= "geeks\nknowledgegate";
char *ptr1, *ptr2;
	
ptr1 = &str[3];
ptr2 = str + 5;
printf("%c", ++*str - --*ptr1 + *ptr2 + 2);
printf("%s", str);
return 0;
}
