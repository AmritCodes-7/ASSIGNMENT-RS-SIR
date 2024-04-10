#include <stdio.h>

int main()
{

    int sum = 0;
    printf("The first 10 natural numbers are:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum is: %d ", sum);

    return 0;
}