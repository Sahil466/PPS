#include <stdio.h>

int main(void) {
  int n1,n2,sum,sub,mul,div,op,modulo,square,squareroot,power,log;
  printf("Enter the first value : ");
  scanf("%d",&n1);
  printf("Enter the second value : ");
  scanf("%d",&n2);
  printf("Enter your choice to perform the spacific operation\n",op);
  printf("Enter the operation number in between 1 to 9 \n where\n 1 is for sum\n 2 is for sub\n 3 is for mul\n 4 is for div\n 5 is for modulo\n 6 is for square\n 7 is for squareroot\n 8 is for power\n 9 is for log\n");
  printf("Your Entered Operation is : %d",op);
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

    case 5:
    modulo=n1%n2;
    printf("the modulo of the two numbers is %d",modulo);
    break;

    case 6:
    square=n1*n1;
    printf("the square of the first number is %d",square);
    break;

    case 7:
    squareroot=sqrt(n1);
    printf("the squareroot of the first number is %d",squareroot);
    break;

    case 8:
    power=pow(n1,n2);
    printf("the power of the first number is %d",power);
    break;

    case 9:
    log=log10(n1);
    printf("the log of the first number is %d",log);
    break;

    default:
    printf("Invalid operation");
  }
  return 0;
}