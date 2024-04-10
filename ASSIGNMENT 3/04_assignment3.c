#include <stdio.h>

int main()
{
    int n; // n = no of terms
    float sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("1/%d + ", i + 1);
        sum += ((float)1 / (i + 1));
    }
    printf("\n\n");
    printf("Sum of series upto %d terms: %f", n, sum);
    return 0;
}