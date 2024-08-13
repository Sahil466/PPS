// #include<stdio.h>
// #include <string.h>
// int main()
// {
//     char str[40]; // declare the size of character string
//     printf(" \n Enter a string to be reversed: ");
//     scanf("%s", str);

//     // use strrev() function to reverse a string
//     printf(" \n After the reverse of a string: %s ", strrev(str));
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// // Recursive function to reverse the string
// void recursiveReverse(char *str, int i)
// {
//     int n = strlen(str);
//     if (i == n / 2)
//         return;

//     // Swap the i and n-i-1 characters
//     char temp = str[i];
//     str[i] = str[n - i - 1];
//     str[n - i - 1] = temp;

//     // Call recursive function after incrementing i
//     recursiveReverse(str, i + 1);
// }

// // Driver program
// int main()
// {
//     char str[] = "geeksforgeeks";
//     recursiveReverse(str, 0);
//     printf("%s\n", str);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

void reverseStringLoop(char inputStr[])
{
    int length = strlen(inputStr);
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", inputStr[i]);
    }
    printf("\n");
}

int main()
{
    char originalStr[] = "GeeksforGeeks";
    reverseStringLoop(originalStr);
    return 0;
}
