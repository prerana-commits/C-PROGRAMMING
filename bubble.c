#include <stdio.h>
int main()
{
  int n, i, a[100], j, temp;
  printf("Enter size=");
  scanf("%d", &n);
  printf("Enter element=");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - 1 - i; j++)
    {
      if (a[j] > a[j + 1])
      {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  printf("\nGiven data is : \n");
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
  return 0;
}