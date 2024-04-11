#include <stdio.h>
typedef struct
{
    int year;
    int month;
    int day;
} date;
int main()
{
    date bs, ad;
    printf("Enter date in B.S (YYYY MM DD): ");
    scanf("%d %d %d", &bs.year, &bs.month, &bs.day);

    ad.year = bs.year - 56;
    ad.month = bs.month - 8;
    ad.day = bs.day - 18;

    printf("\nDate in A.D (YYYY MM DD):%d %02d %02d", ad.year, ad.month, ad.day);

    return 0;
}