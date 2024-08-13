#include <stdio.h>

int main(void) {
  int u , t, d , a;
  // u = initial velocity
  // t = time
  // d = distance
  // a = acceleration
  printf("Enter the initial velocity\n");
  scanf("%d",&u);
  
  printf("Enter the time\n");
  scanf("%d",&t);

  printf("Enter the acceleration\n");
  scanf("%d",&a);

  d = u*t + 0.5*a*t*t;

  printf("The distance is %d",d);
  return 0;
}