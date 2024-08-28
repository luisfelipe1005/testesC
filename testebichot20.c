#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// struct responsavel por guardar as informações do monstro
typedef struct
{
    char nome[100];
    int Vatq;
    float dano;
    int defesa;
    int resFo;
    int resM;
    int resFr;
    int pv;
    int CD;
} monstro;

int main(void)
{
    // objeto monstro é guardado em 99 variações
    int y;

    monstro A = [99];
    // aqui pergunta a quantidade de monstros que se deseja avaliar, sendo utilizada no for
    printf("digite a quantidade de monstros que deseja avaliar\n");
    scanf("%i", y);

    // o for utilizado para a adição dos monstros com suas informações
    for (int x = 0; x < y; x++)
    {
        printf("digite nome do monstro %i \n", x);
        scanf("%s", A[x].nome);
        printf("digite o valor de ataque do monstro %i \n", x);
        scanf("%f", &A[x].Vatq);


         printf("digite a media de dano do monstro %i \n", x);
        scanf("%f", &A[x].dano);

        printf("digite a defesa do monstro %i \n", x);
        scanf("%f", &A[x].defesa);

        printf("digite a resistencia da criatura %i \n", x);
        scanf("%f", &A[x].resFo);

        printf("digite a resistencia media da criatura %i \n", x);
        scanf("%f", &A[x].resM);

        printf("digite a resistencia fraca da criatura %i \n", x);
        scanf("%f", &A[x].resFR);

        printf("digite os pontos de vida da criatura %i \n", x);
        scanf("%f", &A[x].pv);

        printf("digite a CD efeito da criatura, se não tiver deixe nulo %i \n", x);
        scanf("%f", &A[x].CD);
    }

    for (int y = 0; y < x; y++)
    {
       
        printf("o monstro numero  %i possui o nome %s, \n ele tem  %i de bonus de acerto, dando um dano medio de %f\n de resistencias ele possui %f \n", y+1, A[y].media);
    }
}