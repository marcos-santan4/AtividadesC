#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, K;

    printf("Informe a temperatura em Kelvin>> ");
    scanf("%f",&K);

    C = K - 273.15;

    printf("A temperatura em Celsius equivale a >> %f",C);

    return 0;
}
