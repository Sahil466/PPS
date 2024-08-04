#include <stdio.h>
int main(void) {
  int n,t1 = 0, t2 = 1, nextTerm = 0;
  printf("enter the number till you want to generate the fibonacci series\n");
  scanf("%d",&n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  nextTerm = t1 + t2;

  for (int i = 3; i <= n; ++i) {
      printf("%d, ", nextTerm);
      t1 = t2;
      t2 = nextTerm;
      nextTerm = t1 + t2;
  }
  return 0;
}