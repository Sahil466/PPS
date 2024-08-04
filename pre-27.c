#include <stdio.h>

int main(void) {
  int a[100],n;
  printf("Enter the number of the values you want to add and average : ");
  scanf("%d", &n);

  int sum = 0,i;
  printf("Enter the %d numbers :",n);
  for(i=0;i<n-1;i++){
    scanf("%d\n", &a[i]);
  }

  for(i=0; i<n-1; i++){
    sum = sum + a[i];
  }
  printf("the sum of the first %d numbers is %d\n",n,sum);

  int avg=0;
  avg = sum/n;

  printf("the average of the first %d numbers is %d",n,avg);
  return 0;
}