#include <stdio.h>
int main()
{
    struct A
    {
        char a;
        float d;
        char c;
    };
    struct B
    {
        char a;
        char c;
        float d;
    };

    printf("sizeof A: %d bytes.\n", sizeof(struct A));
    printf("sizeof B: %d bytes.\n", sizeof(struct B));
}