#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if(n%2==1){
    printf("The number is prime number");
  }
  else{
    printf("%d is not prime number",n);
  }
  return 0;
}