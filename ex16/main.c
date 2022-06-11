#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p, conv_cm;
    printf("Informe uma medida em polegadas >> ");
    scanf("%f",&p);

    conv_cm = p * 2.54;

    printf("A medida convertida em centimetros >> %f",conv_cm);


    return 0;
}
