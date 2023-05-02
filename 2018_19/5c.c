#include <stdio.h>
int main()
{
    while (1)
    {
        char c, d;
        scanf("%c %c", &c, &d);
        if (c >= 'A' && c <= 'Z')
        {
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                printf("Vowel in capital letter\n");
            else
                printf("Consonant in capital letter\n");
        }

        else if (c >= 'a' && c <= 'z')
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                printf("Vowel in small letter\n");
            else
                printf("Consonant in small letter\n");
        }
        else
            printf("Neither a vowel nor a consonant\n");
    }
}