#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415;

int main()
{
    double r, g;
    printf("Informe um angulo em radianos >> ");
    scanf("%lf",&r);

    g = r*180/PI;

    printf("O angulo convertido em graus >> %lf",g);
    return 0;
}
