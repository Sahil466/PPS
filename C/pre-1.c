#include <stdio.h>

int main(void) {
  int n1,n2,sum,sub,mul,div,op;
  printf("Enter the first value : ");
  scanf("%d",&n1);
  printf("Enter the second value : ");
  scanf("%d",&n2);
  printf("Enter your choice to perform the spacific operation\n",op);
  printf("Enter the operation number in between 1 to 4 \n where\n 1 is for sum\n 2 is for sub\n 3 is for mul\n 4 is for div\n");
  scanf("%d",&op);
  switch(op){
    case 1:
    sum=n1+n2;
    printf("The sum of the two numbers is %d",sum);
    break;

    case 2:
    sub=n1-n2;
    printf("the sub of the two numbers is %d",sub);
    break;

    case 3:
    mul=n1*n2;
    printf("the mul of the two numbers is %d",mul);
    break;

    case 4:
    div=n1/n2;
    printf("the div of the two numbers is %d",div);
    break;

    default:
    printf("Invalid operation");
  }
  return 0;
}