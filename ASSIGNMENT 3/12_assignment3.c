#include <stdio.h>

int main()
{
    int number1, number2, HCF;
    printf("Input 1st number for HCF: ");
    scanf("%d", &number1);
    printf("Input 2nd number for HCF: ");
    scanf("%d", &number2);

    for (int i = 1; i <= number1 && i <= number2; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            HCF = i;
        }
    }
    printf("\nHCF of %d and %d is: %d", number1, number2, HCF);
    return 0;
}