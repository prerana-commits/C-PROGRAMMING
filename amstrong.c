#include<stdio.h>
#include<math.h>
 int main()
{
  int n , tem , cnt = 0 ; 
  float result = 0;
  printf("Enter a number : ");
  scanf("%d" , &n);
  tem = n;
  while(n > 0)
  {
    cnt ++;
    n /= 10;
  }
  n = tem;
  while(n > 0)
  {
    int rem = n%10;
    result = result + pow (rem , cnt);
    n /= 10;
  }
  if(result == tem)
     printf("The no is amstrong number : ");
  else
     printf("The no is not amstrong number : ");
  return 0;
}