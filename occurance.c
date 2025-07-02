#include<stdio.h>
 int main()
{
  int a[100] , i , n , key , cnt=0 ;
  printf("Enter element for occurance");
  scanf("%d",&key);

  for(i=0 ; i<n ; i++)
  {
    if(a[i] == key)
    cnt ++;
  }
  if(cnt == 0)
    printf("Not found");
  else
    printf("Count is %d" , cnt);
  return 0;
}