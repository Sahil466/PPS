#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Enter the first number a : ");
  scanf("%d",&a);

  printf("Enter the first number b : ");
  scanf("%d",&b);
  
  printf("Enter the first number c : ");
  scanf("%d",&c);

  if(a>b){
    if(a>c){
      printf("a is the greatest number");
    }
  }
  else{
    if(b>c){
      printf("b is the greatest number");
    }
    else{
      printf("c is the greatest number");
    }
  }
    



  return 0;
}