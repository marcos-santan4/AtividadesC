#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float g, r;
    setlocale(LC_ALL,"portuguese");

    printf("Informe o ângulo em graus >> ");
    scanf("%f",&g);

    r = g*3.14/180;

    printf("O valor da conversão em radiano é >> %f",r);
    return 0;
}
