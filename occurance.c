#include <stdio.h>
int main()
{
  int a[100], i, n, key, cnt = 0;
  printf("How many elements you want to enter");
  scanf("%d", &n);
  printf("enter elements");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Enter element for occurance");
  scanf("%d", &key);

  for (i = 0; i < n; i++)
  {
    if (a[i] == key)
      cnt++;
  }
  if (cnt == 0)
    printf("Not found");
  else
    printf("Count is %d", cnt);
  return 0;
}