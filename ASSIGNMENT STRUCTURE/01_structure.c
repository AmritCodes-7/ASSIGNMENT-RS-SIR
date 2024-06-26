#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[30];
    char model_num[10];
    int cap;
    float speed;
} air_line;

void sort(air_line *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((p + i)->cap > (p + j)->cap)
            {
                int temp = (p + i)->cap;
                (p + i)->cap = (p + j)->cap;
                (p + j)->cap = temp;

                char temporary1[30];
                strcpy(temporary1, (p + i)->name);
                strcpy((p + i)->name, (p + j)->name);
                strcpy((p + j)->name, temporary1);

                char temporary2[10];
                strcpy(temporary2, (p + i)->model_num);
                strcpy((p + i)->model_num, (p + j)->model_num);
                strcpy((p + j)->model_num, temporary2);

                float temp2 = (p + i)->speed;
                (p + i)->speed = (p + j)->speed;
                (p + j)->speed = temp2;
            }
        }
    }
}
void display(air_line *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nName              : %s", (p + i)->name);
        printf("\nModel Number      : %s", (p + i)->model_num);
        printf("\nApproach Speed    : %f", (p + i)->speed);
        printf("\nSeating Capacity  : %d", (p + i)->cap);
        printf("\n");
    }
}
void input(air_line *p, int n)
{
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("[%d]Enter Name              : ", i + 1);
        scanf("%s", (p + i)->name);
        printf("[%d]Enter Model Number      : ", i + 1);
        scanf("%s", (p + i)->model_num);
        printf("[%d]Enter Approach Speed    : ", i + 1);
        scanf("%f", &(p + i)->speed);
        printf("[%d]Enter Seating Capacity  : ", i + 1);
        scanf("%d", &(p + i)->cap);
        printf("\n\n");
    }
}
int main()
{
    int n;
    air_line airline[500];
    air_line *p_airline;
    p_airline = &airline[0];

    printf("Enter the number of airlines: ");
    scanf("%d", &n);
    input(p_airline, n);
    sort(p_airline, n);
    display(p_airline, n);
    return 0;
}