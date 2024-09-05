#include <stdio.h>
#define ano 2024
int main(void)
{
    int data, idade = 0, fcmax = 0;
    printf("digite sua data de nascimento \n");
    scanf("%i", &data);
    idade = ano - data;
    fcmax = 220 - idade;
    printf("Você possui %i anos e tem fcmax de: %i\n", idade, fcmax);

    return 0; // retorna a merda da função
}