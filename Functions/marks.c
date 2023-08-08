// to check the obtain grade
#include <stdio.h>
int marks();
char grade(int avg);
int main()
{
    int avg = marks();
    char grades = grade(avg);
    printf("The grade is %c\n", grades);
    return 0;
}

int marks()
{
    int mark[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks for subject %d: ", i + 1);
        scanf("%d", &mark[i]);
    }
    int avg = (mark[0] + mark[1] + mark[2] + mark[3] + mark[4]) / 5;
    return avg;
}

char grade(int avg)
{
    if (avg >= 90)
    {
        return 'A';
    }
    else if (avg >= 80)
    {
        return 'B';
    }
    else if (avg >= 70)
    {
        return 'C';
    }
    else if (avg >= 60)
    {
        return 'D';
    }
    else if (avg >= 50)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}