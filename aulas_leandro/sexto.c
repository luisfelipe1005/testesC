#include <stdio.h>

int main(void)
{

    int i;

    printf("digite a sua idade \n");
    scanf("%d", &i);

    switch (i)
    {
    case 0 ... 18:
        printf("você é menor de idade");
    default:
        printf("não");
    }
    return 0; // retorna a merda da função
}