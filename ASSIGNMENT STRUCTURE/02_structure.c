#include <stdio.h>

typedef struct
{
    int year;
    int month;
    int day;
} date;

typedef struct
{
    date estDate;
    char name[20];
    char location[30];
} clz;

int main()
{
    clz college[10];
    for (int i = 0; i < 10; i++)
    {
        printf("[%d]Enter Name:", i + 1);
        scanf("%s", college[i].name);
        printf("[%d]Enter location:", i + 1);
        scanf("%s", college[i].location);
        printf("[%d]Enter established date(YYYY MM DD): ", i + 1);
        scanf("%d %d %d", &college[i].estDate.year, &college[i].estDate.month, &college[i].estDate.day);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\nName         : %s", college[i].name);
        printf("\nEst Date     : %02d-%02d-%02d", college[i].estDate.year, college[i].estDate.month, college[i].estDate.day);
        printf("\nLocation     : %s", college[i].location);
        printf("\n");
    }

    return 0;
}