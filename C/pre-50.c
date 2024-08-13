// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n;
//     printf("Enter the number of values which you want to enter : ");
//     scanf("%d", &n);
//     int *a[n] ,i, j, min, temp;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enterd values are : ");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d \n", a[i]);
//     }

//     for (i = 0; i < 10; i++)
//     {
//         min = i;
//         for (j = i + 1; j < 10; j++)
//         {
//             if (a[min] > a[j])
//             {
//                 min = j;
//             }
//         }
//         if (min != i)
//         {
//             temp = a[min];
//             a[min] = a[i];
//             a[i] = temp;
//         }
//     }

//     printf("the Sorted Array is : \n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     return 0;
// }
#include <stdio.h>

void sort(int *arr, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main()
{
    int arr[5] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    sort(arr, n);

    printf("After sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}