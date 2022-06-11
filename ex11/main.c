#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, ms;

    printf("Informe uma velocidade em m/s >> ");
    scanf("%f",&ms);

    km = ms * 3.6;

    printf("A velocidade convertida em m/s >> %f",km);
    return 0;
}
