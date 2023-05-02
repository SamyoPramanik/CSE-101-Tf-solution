#include <stdio.h>
int isLeapYear(int y)
{
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        return 1;
    else
        return 0;
}
int main()
{
    int year = 2020;
    scanf("%d", &year);
    printf("%s", isLeapYear(year) ? "Leap year" : "Not leap year");
}