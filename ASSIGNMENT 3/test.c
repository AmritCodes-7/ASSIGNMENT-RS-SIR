#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different: root1 = %.2lf, root2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and same: root1 = %.2lf\n", root1);
    } else {
        printf("Roots are complex and different: root1 = %.2lf + %.2lf*i, root2 = %.2lf - %.2lf*i\n",
               -b/(2*a), sqrt(-discriminant)/(2*a), -b/(2*a), sqrt(-discriminant)/(2*a));
    }

    return 0;
}