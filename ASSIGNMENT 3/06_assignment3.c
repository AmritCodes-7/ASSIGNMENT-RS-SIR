#include <stdio.h>
#include <math.h>

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
int main()
{
    int n; // n  is number of terms
    float sum = 1, x;
    printf("Input the value of x: ");
    scanf("%f", &x);
    printf("Input the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n-1; i++)
    {
        if (i % 2 != 0)
        {
            sum -= pow(x, 2 * i) / factorial(2 * i);
        }
        if (i % 2 == 0)
        {
            sum += pow(x, 2 * i) / factorial(2 * i);
        }
    }

    printf("\nthe sum = %f", sum);
    printf("\nNumber of terms = %d", n);
    printf("\nValue of x = %f", x);
    return 0;
}