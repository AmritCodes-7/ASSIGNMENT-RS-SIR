#include <stdio.h>

int main()
{
    int n;
    printf("Input number of terms to display: ");
    scanf("%d", &n);
    printf("Here is the Fibonacci series upto %d terms:\n", n);
    int a = 0, b = 1;
    int c = a + b;
    printf("%d %d ", a, b);

    for (int i = 1; i <= 8; i++)
    {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }
    
    return 0;
}