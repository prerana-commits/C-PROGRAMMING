#include<stdio.h>
 int main()
{
  int n;
  printf("Enter a Number : ");
  scanf("%d" , &n);
  if(n>0)
      printf("+ve no");
  else
      printf("-ve no");
  return 0;
}