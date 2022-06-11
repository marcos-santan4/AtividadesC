#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, soma=0;

    printf("Informe 3 numeros: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    soma = num1+num2+num3;

    printf("O resultado de %d + %d + %d = %d", num1, num2, num3, soma);


    return 0;
}
