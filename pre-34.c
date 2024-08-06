#include<stdio.h>
#include<math.h>
int main(){
    int i,j,n=10,x;
    float sum=1.0,fact=1.0;

    printf("enter the value of x : ");
    scanf("%d",&x);-

    for (i = 1; i < n; i++)
    {
        fact=1.0;
        for (j = i; j > 0; j--)
        {
            /* code */
            fact = fact * j;
        }
            sum = sum + (pow(-x, i) / fact);
    }

    printf("%.4f",sum);

return 0;
}
