// 3. Write a C program to display a such a pattern for n rows using a number that starts with
// 1 and each row will have a 1 as the first and last number.
//   1
//  121
// 12321

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d", k + 1);
        }
        for (int l = i; l > 0; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}