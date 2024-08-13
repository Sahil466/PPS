#include <stdio.h>

int main(void) {
  int f , c;
  printf("Enter the temperature in Centigrade: ");
  scanf("%d",&c);

  f = (c * 9/5) + 32;
  printf("The temperature in Fahrenheit is: %d",f);
  return 0;
}