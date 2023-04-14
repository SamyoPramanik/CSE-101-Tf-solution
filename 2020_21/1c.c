#include <stdio.h>

int isPalindrome(int n)
{

    int revn = 0, n1 = n;
    while (n1)
    {
        revn = revn * 10 + n1 % 10;
        n1 /= 10;
    }
    return revn == n ? 1 : 0;
}
int main()
{
    int number = 5225;
    scanf("%d", &number);
    if (isPalindrome(number))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}