#include <stdio.h>

int main(void) {
  int arr[5],i;
  int n = 5;
  printf("Enter the value : ");
  for(i=0;i<n;i++){
    scanf("%d\t",&arr[i]);
  }

  if(arr[n-1]%2==0){
    printf("The last element is even");
  }
  else{
    printf("The last element is odd");
  }
  return 0;
}