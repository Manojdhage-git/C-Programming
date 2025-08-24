#include <stdio.h>
int f1() { printf ("Jetha"); return 1;}
int f2() { printf ("Babita"); return 1;}
 
int main()
{
  int p = f1() + f2();
  return 0;
}

//Output: JethaBabita