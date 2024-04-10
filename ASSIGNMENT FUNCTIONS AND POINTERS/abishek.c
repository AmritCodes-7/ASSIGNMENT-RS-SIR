
#include <stdio.h>
#include <math.h>
float freq(float l, float c, float r)
{
    return sqrt(1 / (l * c) - (r * r / (4 * c * c)));
}
int main()
{
    float l, r;
    printf("Enter Inductance and Resistance of the circuit: ");
    scanf("%f%f", &l, &r);
    printf("Inductance\tResistance\tCapacitance\tFrequency\n");
    for (float c = 0.01; c <= 0.1; c += 0.01)
    {
        printf("%.3f\t\t%.3f\t\t%.3f\t\t%f\n", l, r, c, freq(l, c, r));
    }
}