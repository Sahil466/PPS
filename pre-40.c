#include <stdio.h>
int main()
{
    int a[20][2];
    int i, j;
    printf("enter the values : ");
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The given values are : ");
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}