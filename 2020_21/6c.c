#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[50];
};

void sort(struct student *s, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0 || (strcmp(s[i].name, s[j].name) == 0 && s[i].id > s[j].id))
            {
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
}

struct student create(int _id, char *_name)
{
    struct student std;
    std.id = _id;
    strcpy(std.name, _name);
    return std;
}

int main()
{
    struct student students[50];

    students[0] = create(23, "safa");
    students[1] = create(23, "sdas");
    students[2] = create(12, "sdas");
    students[3] = create(12, "afs");
    students[4] = create(34, "asdfsf");
    sort(students, 5);

    for (int i = 0; i < 5; i++)
        printf("%d %s\n", students[i].id, students[i].name);
}