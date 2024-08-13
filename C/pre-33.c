#include <stdio.h>
int main()
{

    int n, j, i;
    float sum = 0.0, fact = 1.0;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        /* code */
        for (j = i; j > 0; j--)
        {
            /* code */
            fact = fact * j;
        }

        sum = sum + 1 / (float)fact;
    }

    printf("%.6f", sum);

    return 0;
}