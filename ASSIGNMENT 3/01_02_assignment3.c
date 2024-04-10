#include <stdio.h>

int main()
{
    int number, reverse = 0;
    int rem;
    printf("Enter a number: ");
    scanf("%d", &number);
    int temp = number;
    while (number != 0)
    {
        rem = number % 10;
        reverse = reverse * 10 + rem;
        number = number / 10;
    }
    if (temp == reverse)
    {
        printf("%d is palindrome.", temp);
    }
    else
    {
        printf("%d is not palindrome.", temp);
    }

    return 0;
}