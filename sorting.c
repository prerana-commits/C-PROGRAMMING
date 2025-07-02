#include <stdio.h>
int main()
{
  int a[10], n, flag, low, high, key, mid,i;
  printf("Enter size=");
  scanf("%d", &n);
  printf("Enter element=");
  for(i=0;i<n;i++)
  scanf("%d", &a[i]);
  printf("enter element to search=");
  scanf("%d",&key);

  flag = 0;
  low = 0;
  high = n - 1;
  while (low <= high)
  {
    mid = (low+high)/2;
    if (a[mid] == key)
    {
      flag = 1;
      break;
    }
    else if (a[mid] > key)
      high = mid - 1;
    else
      low = mid + 1;
  }
  if (flag == 1)
    printf("element found");
  else
    printf("not found");
  return 0;
}