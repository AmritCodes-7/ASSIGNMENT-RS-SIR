#include <stdio.h>

int minimum(int *ptr)
{
    int min = *ptr;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (*(ptr + 3 * i + j) < min)
            {
                min = *(ptr + 3 * i + j);
            }
        }
    }
    return min;
}

int main()
{
    int arr[3][3], min;
    int *p_arr;
    p_arr = &arr[0][0];

    printf("Enter the element of array: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", (p_arr + 3 * i + j));
        }
    }
    min = minimum(p_arr);
    printf("\nminimum: %d", min);
    printf("\n\n");

    for (int i = 0; i < 3; i++)
    {
        arr[i][i] = min;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(p_arr + 3 * i + j));
        }
        printf("\n");
    }

    return 0;
}