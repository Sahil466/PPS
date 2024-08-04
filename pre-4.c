#include <stdio.h>

int main(void) {
  int num1 , num2 , temp;

  printf("enter the first number : ");
  scanf("%d",&num1);

  printf("enter the sencond number : ");
  scanf("%d",&num2);

  printf("The numbers before interchange are %d and %d\n",num1,num2);

  temp = num1;
  num1=num2; 
  num2=temp;

  printf("the numbers after interchange are : %d and %d",num1,num2);
  //printf("the first number is : %d\n",num1);
  //printf("the second number is : %d\n",num2);
  return 0;
}