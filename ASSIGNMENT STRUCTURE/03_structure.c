#include <stdio.h>
#define MAX 5

typedef struct
{
    float salary;
    char name[20];
    char address[30];

} per;

void increase_salary(per *ptr)
{
    for (int i = 0; i < MAX; i++)
    {
        (ptr + i)->salary += (0.15 * (ptr + i)->salary);
    }
}

int main()
{

    per person[MAX];
    for (int i = 0; i < MAX; i++)
    {
        printf("[%d]Enter Name:", i + 1);
        scanf("%s", person[i].name);
        printf("[%d]Enter address:", i + 1);
        scanf("%s", person[i].address);
        printf("[%d]Enter Salary: ", i + 1);
        scanf("%f", &person[i].salary);
    }
    increase_salary(&person[0]);
    for (int i = 0; i < MAX; i++)
    {
        printf("\nName        : %s", person[i].name);
        printf("\naddress     : %s", person[i].address);
        printf("\nSalary      : %.2f", person[i].salary);
        printf("\n");
    }

    return 0;
}