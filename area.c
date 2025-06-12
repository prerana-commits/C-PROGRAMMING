#include<stdio.h>
 int main()
{
  float r , area;
  printf("Enter a radius");
  scanf("%f",&r);
  area = 3.14 * (r*r);
  printf("Area of a Circle is %.2f ",area);
  return 0;
}