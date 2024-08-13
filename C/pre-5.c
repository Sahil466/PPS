#include <stdio.h>

int main(void) {
  int km , meter , feet , inch , centi;

  printf("Enter the distence which is in kilomere : \n");
  scanf("%d",&km);

  meter = km * 1000;
  feet = km * 3280;
  inch = km * 39370;
  centi = km * 100000;

  printf("The distence which you entered in kilometer that is in meter is :\n %d\n\n",meter);
  printf("The distence which you entered in kilometer that is in feet is : \n %d\n\n",feet);
  printf("The distence which you entered in kilometer that is in inch is : \n %d\n\n",inch);
  printf("The distence which you entered in kilometer that is in centimeter is :\n%d\n\n",centi);
    
  return 0;
}