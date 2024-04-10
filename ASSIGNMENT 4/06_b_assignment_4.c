// 6. Write a program in C to display a pattern like
// b.
// @     @
//  @   @
//   @ @
//    @

#include <stdio.h>

int main()
{
    int nsp = 5;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 7; k++)
        {
            if ((i + k) == 2 * i)
            {
                printf("@");
            }
        }
        for (int l = 0; l < nsp; l++)
        {
            printf(" ");
        }
        nsp -= 2;

        for (int k = 0; k < 3; k++)
        {
            if ((i + k) == 2 * i)
            {
                printf("@");
            }  
        }
        printf("\n");
    }

    return 0;
}