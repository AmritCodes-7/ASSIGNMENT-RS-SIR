#include <stdio.h>

int main()
{
    int number, count = 0;
    printf("Input the number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is prime number.", number);
    }
    else
    {
        printf("%d is not prime number.", number);
    }

    return 0;
}