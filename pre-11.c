#include <stdio.h>

int main(void) {
  char ch;
  printf("Enter the character : ");
  scanf("%ch",&ch);

  if(ch>='A' && ch<='Z'){
    printf("The character is Capital letter");
  }
  else if (ch>='a' && ch<='z'){
    printf("The character is Small letter");
  }
  else{
    printf("The character is any other special character ");
  }
  
  return 0;
}