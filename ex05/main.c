#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, div;

    printf("Informe um numero >> ");
    scanf("%f",&num);

    div = num/5;

    printf("%.2f",div);

    return 0;
}
