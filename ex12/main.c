#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mh, km;

    printf("Informe a distancia em Milhas >> ");
    scanf("%f",&mh);

    km = 1.61 * mh;

    printf("A distância convertida em Km >> %f",km);

    return 0;
}
