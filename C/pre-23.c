#include <stdio.h>
int main(void) {
  int n ;
  printf("Enter the number : ");
  scanf("%d",&n);

  printf("the number which are prime : ");
  for(int i = 2 ; i <= n ; i++){
    int count = 0 ;
    for(int j = 1 ; j <= i ; j++){
      if(i%j == 0){
        count++;
      }
    }
    if(count == 2){
      printf("%d ",i);
    }
  }
  
  return 0;
}