#include<stdio.h>
 int main()
{
  int a , b , c ;
  printf("Enter 3 numbers : ");
  scanf("%d%d%d" , a , b , c);
  b=(a>b)?a:b;
  b=(c>b)?a:b;
  printf("max is %d" , b);
  return 0;
  
}