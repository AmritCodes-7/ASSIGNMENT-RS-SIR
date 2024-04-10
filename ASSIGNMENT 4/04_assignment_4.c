// 4. Write a program in C to convert an octal number into binary.
// Test Data :
// Input an octal number (using digit 0 - 7) :57
// Expected Output :
// The Octal Number : 57
// The equivalent Binary Number : 101111

#include <stdio.h>
#include <math.h>

int main()
{
    // to convert octal to binary first conert the octal number to decimal and the decimal number into binary

    int rem;
    int octalNumber, decimalNumber = 0;
    int binaryNumber = 0, place = 0;
    printf("Input an octal number (using digit 0 - 7): ");
    scanf("%d", &octalNumber);

    // while loop will convert the octal number into decimal
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        decimalNumber = decimalNumber + rem * pow(8, place);
        octalNumber = octalNumber / 10;
        place++;
    }
    rem = 0;
    place = 1;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 2;
        binaryNumber = binaryNumber + rem * place;
        decimalNumber = decimalNumber / 2;
        place = place * 10;
    }
    printf("the equivalent Binary Number: %d", binaryNumber);
    return 0;
}