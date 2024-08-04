#include <stdio.h>

int main(void) {

  int basic,Da,Hra,Ma,Pf,Gross,Net;

  printf("Enter Basic Salary : ");
  scanf("%d",&basic);
  Da = 0.1*basic;
  Hra = 0.075*basic;
  Ma = 300;
  Pf = 0.125*basic;
  Gross = basic+Da+Hra+Ma;
  Net = Gross-Pf;

  printf("Gross Salary: %d\n",Gross);
  printf("Net Salary: %d\n",Net);
  
  return 0;
}