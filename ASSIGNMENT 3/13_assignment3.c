#include <stdio.h>

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int strongNumber(int num)
{
    int sum = 0, rem, temp;
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        sum += factorial(rem);
        num = num / 10;
    }
    if (temp == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("Input the number to check whether it is Strong number: ");
    scanf("%d", &number);
    if (strongNumber(number) == 1)
    {
        printf("%d is strong number.", number);
    }
    else
    {
        printf("%d is not strong number.", number);
    }

    return 0;
}