#include<stdio.h>

void primenumber( int a){
    int i,flag=0;
    if (a == 0 || a == 1)
        flag = 1;
    for(i=2;i<a;i++){
        if(a%i==0){
            flag=1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number.", a);
    else
        printf("%d is not a prime number.", a);
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0);
    primenumber(a);
    return 0;
}