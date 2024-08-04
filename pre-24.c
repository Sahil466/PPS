#include <stdio.h>

int main(void) {
  int n,fact;
  printf("Enter the number : ");
  scanf("%d",&n);
  fact=1;
  while(n>0){
    fact=fact*n;
    n--;
  }
  printf("Factorial is %d",fact);
  return 0;
}