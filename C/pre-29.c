#include <stdio.h>

int main()
{
    int marks[3][5]; // 2D array to store marks for 3 subjects and 5 students
    int i, j;
    float averageMarks;
    int totalMarks=0;

    // Nested for loop to collect and print marks
    for (j = 0; j < 3; j++)
    {
        printf("Enter the marks for Subject %d:\n", j + 1);
        for (i = 0; i < 5; i++)
        {
            printf("Student %d: ", i + 1);
            scanf("%d", &marks[j][i]);
            printf("Marks for Subject %d, Student %d: %d\n", j + 1, i + 1, marks[j][i]);
            totalMarks += marks[j][i];
        }
    }
//  Calculate average marks
    averageMarks =(float)totalMarks / (3*5);

//   Print average marks
    printf("Average marks of the 5 students in 3 Subjects: %.2f\n", averageMarks);

    return 0;
}