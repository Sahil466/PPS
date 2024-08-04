#include <stdio.h>

int main(void) {
  int n;
  printf("Enter the number : ");
  scanf(" %d",&n);

  if(n>0){
    prtinf("number is positive");
  }
  else if(n<0){
    printf("number is negative");
  }

  else{
    printf("number is zero");
  }
  if(n%2==0){
    printf("The number is even");
  }
  else{
    printf("The number is odd");
  }
  
    
  return 0;
}