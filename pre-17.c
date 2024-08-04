#include <stdio.h>

int main(void) {
  char ch;
  printf("Enter the character : ");
  scanf("%ch",&ch);

  switch(ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("The character is Vowel");
    break;

    default:
    printf("The character is not Vowel");
  }
  return 0;
}