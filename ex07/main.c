#include <stdio.h>
#include <stdlib.h>

int main()
{
    double C, F;

    printf("Informe uma temperatura em Fahrenheit >> ");
    scanf("%lf",&F);

    C = 5.0*(F-32.0)/9.0;

    printf("A temperatura %lf em Fahrenheit corresponde a %lf em Celsius",F,C);

    return 0;
}
