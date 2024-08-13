#include <stdio.h>
int main()
{
    int n, i, k, j;
    char C = '#';
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        if (i == 0)
        {
            printf(" * ");
        }
        else
        {
            printf("* ");
        }
        for (k = 0; k < i; k++)
        {
            printf("%c ",C);
        }
        if (i == 0)
        {
            printf(" ");
        }
        else
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
