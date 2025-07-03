#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  char data[100];
  int a[100], n, i, key, cnt = 0;
  fp = fopen("number.txt", "r");
  printf("Enter a N : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    fscanf(fp, "%d", &a[i]);
    printf("%d ", a[i]);
  }
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