#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    printf("Input value of x: ");
    scanf("%d", &x);
    int sum = 0;
    printf("Input number of terms: ");
    scanf("%d", &n);
    printf("The values of the series: \n");
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 != 0)
        {
            int value = pow(x, (2 * i) + 1);
            printf("\n-%d", value);
            sum -= pow(x, (2 * i) + 1);
        }
        if (i % 2 == 0)
        {
            int value = pow(x, (2 * i) + 1);
            printf("\n%d", value);
            sum += pow(x, (2 * i) + 1);
        }
    }
    printf("\nThe sum = %d", sum);

    return 0;
}