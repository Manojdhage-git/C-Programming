#include <stdio.h> 
int main() 
{ 
  int a = 10, b = 20, c = 30; 
  if (c > b > a) 
    printf("TRUE"); 
  else
    printf("FALSE"); 
  return 0; 
}

// Note : Here in if condition we have used relational operator twice
// So the condition will be evaluated from left to right
// First c > b will be evaluated which is FALSE (0)
// Then the result of first condition (0) will be compared with a (10) i.e. 0 > 10 which is again FALSE (0)
// Hence the output will be FALSE