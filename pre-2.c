#include <stdio.h>

int main(void) {
  //a= area , h=height, b=base
  int a, h, b;

  printf("Enter the height of the triangle: ");
  scanf("%d", &h);

  printf("Enter the base of the triangle: ");
  scanf("%d", &b);

  a = (h * b) / 2;
  printf("The area of the triangle is: %d", a);
  
  return 0;
}