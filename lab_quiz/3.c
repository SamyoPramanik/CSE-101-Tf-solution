#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char id[10];
    char name[20];
    int age;
    char dest[20];
    float salary;
} Employee;

void addEmployee(Employee *emp)
{
    FILE *fp = fopen("employees_record.txt", "a");
    fprintf(fp, "%s,%s,%d,%s,%f\n", emp->id, emp->name, emp->age, emp->dest, emp->salary);
    fclose(fp);
}

void display()
{
    FILE *fp = fopen("employees_record.txt", "r");
    printf("%-10s%-10s%-5s%-15s%-10s\n", "ID", "Name", "Age", "Designation", "Salary");
    for (int i = 0; i < 50; i++)
        printf("-");
    printf("\n");
    char line[100];
    while (fscanf(fp, "%s", line) != EOF)
    {
        char *p = strtok(line, ",");
        printf("%-10s", p);
        p = strtok(NULL, ",");
        printf("%-10s", p);
        p = strtok(NULL, ",");
        printf("%-5s", p);
        p = strtok(NULL, ",");
        printf("%-15s", p);
        p = strtok(NULL, ",");
        printf("%-10s", p);
        printf("\n");
    }
}

Employee *search(char *id)
{
    FILE *fp = fopen("employees_record.txt", "r");
    char line[100];
    Employee *emp1 = (Employee *)malloc(sizeof(Employee));
    int found = 0;
    while (fscanf(fp, "%s", line) != EOF)
    {
        char *p = strtok(line, ",");
        if (strcmp(id, p) == 0)
        {
            found = 1;
            strcpy(emp1->id, p);
            p = strtok(NULL, ",");
            strcpy(emp1->name, p);
            p = strtok(NULL, ",");
            emp1->age = atoi(p);
            p = strtok(NULL, ",");
            strcpy(emp1->dest, p);
            p = strtok(NULL, ",");
            emp1->salary = atof(p);
            break;
        }
    }
    return found ? emp1 : NULL;
}
int main()
{
    while (1)
    {
        printf("1.Add, 2. Display, 3.Search\n");
        int input;
        scanf("%d", &input);
        switch (input)
        {
        case 1:
        {
            Employee emp;
            scanf("%s %s %d %s %f", &emp.id, &emp.name, &emp.age, &emp.dest, &emp.salary);
            addEmployee(&emp);
            display();
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            char id[10];
            scanf("%s", id);
            Employee *emp = search(id);
            if (emp == NULL)
                printf("Employee not found..\n");
            else
            {
                printf("id = %s\n", emp->id);
                printf("name = %s\n", emp->name);
                printf("age = %d\n", emp->age);
                printf("designation = %s\n", emp->dest);
                printf("salary = %f\n", emp->salary);
            }
        }
        }
    }
}
