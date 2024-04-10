#include <stdio.h>

int main()
{
    int n, sum = 0;
    int rsum = 0;
    printf("Input number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        rsum = rsum * 10 + 1;
        sum += (rsum);
        printf("%d + ", rsum);
    }
    printf("\nThe Sum is : %d", sum);
    return 0;
}