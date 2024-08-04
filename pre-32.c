#include<stdio.h>
int main(){
    float n,i;
    float sum=0.0;
    printf("Enter the number : ");
    scanf("%f",&n);

    for(i=1.0; i<=n; i++){
        sum+=1.0/i;
    }

    printf("%f",sum);
    return 0;
}