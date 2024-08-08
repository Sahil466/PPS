// #include <stdio.h>

int main()
{
    int n, k, i, j;

    printf("Enter the row: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        int C=1;
        // Print coefficients
        for (k = 1; k <= i; k++)
        {
            printf("%d ", C);
            C = C * (i - k) / k;
        }

        printf("\n");
    }

    return 0;
}