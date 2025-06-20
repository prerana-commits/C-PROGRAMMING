#include<stdio.h>
 int main()
{
  float amt,da,hra,totalsalary;
  printf("Enter the Basic salary : ");
  scanf("%f" , &amt);

  printf("Enter the DA:");
  scanf("%f" , &hra);

  totalsalary = amt + da + hra ;

  printf("Total salary = %.2f\n" , totalsalary);
  
  return 0;
}
