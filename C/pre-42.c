#include <stdio.h>
#include <string.h>

char* deleteCharC(char *s, char ch)
{
    int i, j;
    int len = strlen(s);
    for (i = j = 0; i < len; i++)
    {
        if (s[i] != ch)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    return s;
}

int main()
{
    char s[] = "hello";
    char ch = 'l';
    printf("%s\n", deleteCharC(s, ch)); // Output: "heo"
    return 0;
}
