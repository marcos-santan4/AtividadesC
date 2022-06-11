#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, K;

    printf("Informe uma temperatura em C >> ");
    scanf("%f",&C);

    K = C + 273.15;

    printf("A temperatura em Celsius equivale a >> %f",K);

    return 0;
}
