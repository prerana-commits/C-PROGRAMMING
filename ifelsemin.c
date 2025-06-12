#include<stdio.H>
 int main()
{
  int a , b , c;

  printf("Enter 3 numbers : ");
  scanf("%d%d%d" , &a , &b , &c);

  if(a<b && a<c)
    printf("min is %d" , a);
  else if(b<a && b<c)
    printf("min is %d" , b);
  else
    printf("min is %d" , c);

  return 0;
}