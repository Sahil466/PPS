#include <stdio.h>

int main(void) {
  int sum=0,n;
  printf("Enter the value : ");
  scanf("%d",&n);

  for(int i=1; i<=n; i++){
    sum = sum + i;
  }

  printf("The sum of %d natural numbers is %d",n,sum);
  return 0;
}