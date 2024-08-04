#include <stdio.h>

int main(void) {
  int marks;
  
  printf("enter the marks : ");\
  scanf("%d",&marks);

  if(marks<36){
    printf("fail");
  }
  else{
    printf("pass");
  }
  return 0;
}