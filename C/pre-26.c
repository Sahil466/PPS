// C program to implement getchar()
// function to read single character
#include <stdio.h>

// Driver code
int main()
{
    char ch;
    int n,count=0,count1=0,count2=0;
    printf("Enter how many characters you want to add : ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        ch = getchar();
        if(ch == ' '){
            printf("Space");
            count++;
        }
        else if (ch=='\n'){
            printf("Enter");
            count1++;
        }
        else{
            printf("Character");
            count2++;
        }
        printf("The character is : %c\n",ch);
    }
    printf("The number of spaces are : %d\n",count);
    printf("The number of enter are : %d\n",count1);
    printf("The number of characters are : %d\n",count2);

    return 0;
}