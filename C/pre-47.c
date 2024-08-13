#include <stdio.h>
struct personal
{
    char name[25];
    int DOB;
    int salary;
};
int main()
{
    int i, n;
    printf("Enter the values for how many personas value you want to add : ");
    scanf("%d", &n);
    struct personal p[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the person-%d : \t", i + 1);
        scanf("%s", &p[i].name);
        printf("Enter the DOB of the person-%d : \t", i + 1);
        scanf("%d", &p[i].DOB);
        printf("Enter the Salary of the person-%d : \t", i + 1);
        scanf("%d", &p[i].salary);
    }

    printf("\n\tName\tDOB\tSalary\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%s\t%d\t%d\n", p[i].name, p[i].DOB, p[i].salary);
    }
    return 0;
}