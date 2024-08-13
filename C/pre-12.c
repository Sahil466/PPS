#include <stdio.h>

int main(void) {
  int marks;
  printf("Enter your marks: ");
  scanf("%d", &marks);

  if (marks >= 80 && marks <= 100){
    printf("Distinct");
    
  }
  if(marks >= 60 && marks <= 79){
    printf("First class");
  }
  if(marks >= 40 && marks <= 59){
    printf("Second class");
  }
  if(marks >= 0 && marks <= 39){
    printf("Fail");
  }
  return 0;
}