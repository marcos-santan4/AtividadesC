#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float num1, potencia;

    printf("Informe um numero para saber o seu dobro: ");
    scanf("%f",&num1);

    potencia = pow(num1,2);

    printf("%f",potencia);

    return 0;
}
