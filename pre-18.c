#include <stdio.h>

int main(void) {
  int arr[5],max,min,i;
  int n=5;
  printf("Enter the elements of the array: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
   max = arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  min = arr[n];
  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min = arr[i];
    }
  }

  printf("The maximum element is: %d\n",max);
  printf("The minimum element is: %d",min);
  
  return 0;
}