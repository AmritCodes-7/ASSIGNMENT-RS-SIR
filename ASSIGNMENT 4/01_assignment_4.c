// 1. Write a C program to make such a pattern like a pyramid with a number which will repeat
// the number in the same row.
//    1
//   2 2
//  3 3 3
// 4 4 4 4
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the nmber of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++) // for space
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) // for number pattern
        {
            printf("%d ", i + 1);
        }
        printf("\n");
    }
    return 0;
}