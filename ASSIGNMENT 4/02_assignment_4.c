// 2. Write a program in C to display a pattern like a diamond.
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

int main()
{
    int noOfSpace = 8 / 2;  // initial number of space
    int noOfStars = 1;      // initial number of stars
    int middleLine = 8 / 2; // middle line so we could reverse the condition of upper part in lower part
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j < noOfSpace; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < noOfStars; k++)
        {
            printf("*");
        }
        printf("\n");
        if (i < middleLine)
        {
            noOfSpace--;
            noOfStars += 2;
        }
        else
        {
            noOfSpace++;
            noOfStars -= 2;
        }
    }

    return 0;
}