#include <stdio.h>

int main(void) {
  int i,p,r,n;
  //i=interest, r=rate, n=number of years,p=principle amount
  printf("Enter the value of the principle amount: ");
  scanf("%d",&p);

  printf("Enter the value of the rate: ");
  scanf("%d",&r);

  printf("Enter the value of the number of years: ");
  scanf("%d",&n);

  i=(p*r*n)/100;
  printf("The value of the interest is: %d",i);
  
  return 0;
}