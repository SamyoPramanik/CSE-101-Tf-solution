#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[50];
    int id;
    char grade;
} Student;

int main()
{
    int n;
    scanf("%d", &n);
    Student student[n];
    double avg;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %c", student[i].name, &student[i].id, &student[i].grade);
        char g = student[i].grade;
        switch (g)
        {
        case 'A':
        {
            avg += (4 * 1.0) / n;
            break;
        }
        case 'B':
        {
            avg += (3 * 1.0) / n;
            break;
        }
        case 'C':
        {
            avg += (2 * 1.0) / n;
            break;
        }
        case 'D':
        {
            avg += (1 * 1.0) / n;
            break;
        }
        default:
            break;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (student[i].grade == student[j].grade)
            {
                if (strcmp(student[i].name, student[j].name) == 1)
                {
                    Student temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                }
            }
            else if (student[i].grade > student[j].grade)
            {
                Student temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%-50s %-10d %c\n", student[i].name, student[i].id, student[i].grade);
    printf("Average = %lf\n", avg);
}