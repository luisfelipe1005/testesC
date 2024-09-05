#include <stdio.h>
int main(void)
{
    int num;
    printf("digite um numero \n");
    scanf("%i", &num);
    printf("O numero %i tem o antecessor : %i e tem o sucessor %i: %i\n", num, num - 1, num + 1);

    return 0; // retorna a merda da função
}