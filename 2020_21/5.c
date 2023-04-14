#include <stdio.h>
#include <string.h>

int isPalindrome(char *str)
{
    int len = strlen(str) - 1;
    int i = 0, palindrome = 1;
    while (i < len)
    {
        if (str[i++] != str[len--])
        {
            palindrome = 0;
            break;
        }
    }
    return palindrome;
}

int main()
{
    FILE *ifp = fopen("in.txt", "r");
    FILE *ofp = fopen("out.txt", "w");
    char str[100];
    int num;
    while (fscanf(ifp, "%s %d", str, &num) == 2)
        fprintf(ofp, "%s %s\n", isPalindrome(str) ? "Palindrome" : "Not-Palindrome", num % 2 ? "Odd" : "Even");
    fclose(ifp);
    fclose(ofp);
}