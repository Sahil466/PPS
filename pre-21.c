#include <stdio.h>

int main(void) {
  int num1[5],sum;

  printf("Enter the number of the array : ");
  for(int i=0; i<5; i++){
    scanf("%d", &num1[i]);
  }
  
  sum =  num1[0] + num1[4];
  printf("the sum of the first and last digit is : %d",sum);
  return 0;
}