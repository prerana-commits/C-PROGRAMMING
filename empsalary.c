#include<stdio.h>
 int main()
{
  float bs,totalsalary,da,hra,tax;
  int eid;
  char ename[100];
  FILE *fp;

  fp = fopne("salarySlip.txt","W");

  printf("Enter Employee Details : ");
  printf("\nID : ");
  scanf("%d" , &eid);
  printf("Name : ");
  scanf("%s" ,&ename);
  printf("Basic salary : ");
  scanf("%f" , &bs);
  printf("DA (%%) : ");
  scanf("%f" , &da);
  printf("HRA (%%) : ");
  scanf("%f" , &hra);
  printf("TAX (%%) : ");
  scanf("%f" , &tax);

  totalsalary = bs + ((bs * (da+hra-tax))/100);

  fprint(fp,"\n--------------Employee salarySlip--------------");

  fprintf(fp,"\n\t\tID            : %d " , eid);
  fprintf(fp,"\n\t\tName          : %s " , ename);
  fprintf(fp,"\n\t\tBasic Salary  : %.2f " , bs);
  fprintf(fp,"\n\t\tDA (%%)       : %.2f " , da);
  fprintf(fp,"\n\t\tHRA (%%)      : %2.f " , hra);
  fprintf(fp,"\n\t\tTAX (%%)      : %2.f " , tax);
  fprintf(fp,"\n\t\tTotal Salary  : %2.f " ,totalsalary); 

  return 0;
    
}