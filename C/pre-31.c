
#include<stdio.h>

int main(){
    int i,n,sum=0;

    printf("Enter the number :");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        sum=sum+(i*i);
    }
    printf("This is the ans of Evaluation of the serious of 1^2+2^2+..........n^2\n\n");
    printf("Sum of squares of first %d natural numbers is %d",n,sum);

    return 0;
}