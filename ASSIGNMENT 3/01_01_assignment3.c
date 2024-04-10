// Find roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float D, root1, root2;
    printf("Quadratic form is of: ax^2 + bx + c = 0");
    printf("\nNOTE: a cannot be zero.\n\n");
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    D = pow(b, 2) - (4 * a * c);
    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("\nRoot1 = %.2f", root1);
        printf("\nRoot2 = %.2f", root2);
    }
    else if (D == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("\nRoot1 = %.2f", root1);
        printf("\nRoot2 = %.2f", root2);
    }
    else
    {
        root1 = -b / (2 * a);
        root2 = sqrt(-D) / (2 * a);
        printf("Imaginary roots are: %.2f + (%.2f)i and  %.2f - (%.2f)i", root1, root2, root1, root2);
    }

    return 0;
}