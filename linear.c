#include<stdio.h>
 int main()
{
  int n,i,a[100],flag,key;
  printf("Enter size=");
  scanf("%d",&n);
  printf("Enter Elememt=");
  for(i=0;i<n;i++)
  scanf("%d" , &a[i]);
  printf("Enter Element for search");
  scanf("%d" , &key);

  flag = 0;
  for(i=0;i<n;i++)
  {
    if(key==a[i])
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
    printf("Element found");
  else
    printf("Element not found");
  return 0;
}