#include <stdio.h>
 int main() 
{
  int number;

  printf("Enter an integer: ");
  scanf("%d", &number);

  if ((number / 2) * 2 == number) 
{
  printf("%d is an even number\n", number);
} 
  else 
{         
  printf("%d is an odd number\n", number);
}
  return 0;
   }