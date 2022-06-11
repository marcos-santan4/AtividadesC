#include <stdio.h>
#include <stdlib.h>

int main()
{
    double C, F;

    printf("Informe uma temperatura em Celsius >> ");
    scanf("%lf",&C);

    F = C *(9.0/5.0)+32.0;

    printf("A temperatura %lf em Celsius corresponde a %lf em Fahrenheit",C,F);

    return 0;
}
