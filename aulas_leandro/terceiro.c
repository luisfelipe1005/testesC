#include <stdio.h>
#define tam 20
int main(void)
{
    char nome[tam + 1];
    printf("digite o seu nome \n");
    fgets(nome, tam, stdin);
    printf("boa noite %s\n", nome);

    return 0; // retorna a merda da função
}