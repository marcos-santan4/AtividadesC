#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, ms;

    printf("Informe a velocidade em km/h >> ");
    scanf("%f",&km);

    ms=km/3.6;

    printf("A velocidade convertida em m/s >> %f",ms);

    return 0;
}
