#include <stdio.h>
#include <math.h>

float frequency(float r, float l, float c)
{
    return sqrt((1 / (l * c)) - ((r * r) / (4 * c * c)));
}

int main()
{
    float l, r;
    printf("Enter the value of inductance and resistance: ");
    scanf("%f%f", &l, &r);
    printf("Inductance\tResistance\tCapacitance\tFrequency\n");

    for (float i = 0.01; i <= 0.1; i += 0.01)
    {
        float c = i;
        float freq = frequency(r, l, c);
        printf("%.3f\t\t%.3f\t\t%.3f\t\t%.3f\n", l, r, c, freq);
    }

    return 0;
}