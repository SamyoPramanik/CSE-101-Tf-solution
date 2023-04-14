#include <stdio.h>

void printbinary(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        if (n & 1 << i)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int getStdCode(int stdID)
{
    int serial = stdID % 1000;
    stdID /= 1000;
    int dept = stdID % 100;
    stdID /= 100;
    int year = 2000 + stdID;
    // printf("%d %d %d", year, dept, serial);
    int stdCode = year << 18;
    stdCode |= (dept << 9);
    stdCode |= serial;
    return stdCode;
}

int getstdID(int stdCode)
{
    int serial = 0, dept = 0, year = 0;

    // process 1
    //  for (int i = 8; i >= 0; i--)
    //  {
    //      if (stdCode & 1 << i)
    //          serial |= 1 << i;
    //  }

    // for (int i = 17; i >= 9; i--)
    // {
    //     if (stdCode & 1 << i)
    //         dept |= 1 << i - 9;
    // }

    // for (int i = 31; i >= 18; i--)
    // {
    //     if (stdCode & 1 << i)
    //         year |= 1 << i - 18;
    // }

    // process 2
    year = stdCode >> 18;
    stdCode <<= 14;
    dept = stdCode >> 23;
    stdCode <<= 9;
    serial = stdCode >> 23;

    int stdID = year % 100;
    stdID = stdID * 100 + dept;
    stdID = stdID * 1000 + serial;
    return stdID;
}

int main()
{
    int stdID = 2105167;
    // printf("Enter student ID: ");
    // scanf("%d", &stdID);
    printf("stdID= %d\n", stdID);
    printbinary(stdID);
    int stdCode = getStdCode(stdID);
    printf("stdCode= %d\n", stdCode);
    printbinary(stdCode);
    stdID = getstdID(stdCode);
    printf("stdID= %d\n", stdID);
}