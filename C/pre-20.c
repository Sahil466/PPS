#include <stdio.h>

int main(void) {
  int num1[5];
  int num2[5];

  printf("Enter the values of the first number : " );
  for(int i=0; i<5; i++){
    scanf("%d",&num1[i]);
  }

  printf("Enter the values of the second number : " );
  for(int i=0; i<5; i++){
    scanf("%d",&num2[i]);
  }

  printf("The sum of the numbers is : ");
  for(int i=0; i<5; i++){
    printf("%d ",num1[i]+num2[i]);
  }

  
  return 0;
}