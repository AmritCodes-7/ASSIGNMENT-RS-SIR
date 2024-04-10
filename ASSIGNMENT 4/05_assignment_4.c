// 5. Write a C program to display Pascal's triangle.
// Test Data :
// Input number of rows: 4
// Expected Output :
//    1
//   1 1
//  1 2 1
// 1 3 3 1

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no of rows: ");
    scanf("%d", &n);
    int value = 0, j, i, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            if (i == 1 || k == 1)
            {
                value = 1;
            }
            else
            {
                value = value * (i - k + 1) / (k - 1);
            }
            printf("%2d", value);
        }

        printf("\n");
    }

    return 0;
}
