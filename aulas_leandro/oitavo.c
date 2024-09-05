#include <stdio.h>

int main(void)
{
    int parede, rendimento;
    float latas = 0;
    printf("digite a quantidade de metros que deseja pintar\n");
    scanf("%d", &parede);
    printf("digite quantos metros demão uma lata faz:\n");
    scanf("%d", &rendimento);
    latas = parede / rendimento;
    printf("a quantidade de latas necessarias pra pintar %d metros quadrados é: %1f por demão\b \n", parede, latas);

    return 0; // retorna a merda da função
}