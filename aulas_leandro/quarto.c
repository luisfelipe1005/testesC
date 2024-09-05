#include <stdio.h>

int main(void)
{
    float a, b;
    printf("digite o primeiro numero, sem valores comicamente grandes ou que não sejam numeros \n");
    scanf("%f", &a);
    printf("digite o segundo numero, sem valores comicamente grandes ou que não sejam numeros \n");
    scanf("%f", &b);
    printf("a soma dos dois numeros é: %f\n", a + b);

    return 0; // retorna a merda da função
}