#include <stdio.h>

int main()
{
    int number, sum = 0;
    printf("Input the number: ");
    scanf("%d", &number);
    printf("The positive divisor: ");
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\n\nThe sum of the divisor is: %d", sum);
    if (sum == number)
    {
        printf("\nSo, this number is perfect.");
    }
    else
    {
        printf("\nSo, this number is not perfect.");
    }

    return 0;
}