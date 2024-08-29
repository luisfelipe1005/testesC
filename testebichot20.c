#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// struct responsavel por guardar as informações do Monstro
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
    int PM;
} Monstro;

void mostrar(Monstro bicho, int numero);

int main(void)
{
    // objeto Monstro é guardado em 99 variações
    int y;

    Monstro A[99];
    // aqui pergunta a quantidade de Monstros que se deseja avaliar, sendo utilizada no for
    printf("digite a quantidade de Monstros que deseja avaliar\n");
    scanf("%i", &y);

    // o for utilizado para a adição dos Monstros com suas informações
    for (int x = 0; x < y; x++)
    {

        printf("digite nome do Monstro %i \n", x + 1);
        scanf("%s", &A[x].nome);
        printf("digite o valor de ataque do Monstro %i \n", x);
        scanf("%i", &A[x].Vatq);

        printf("digite a media de dano do Monstro %i \n", x);
        scanf("%f", &A[x].dano);

        printf("digite a defesa do Monstro %i \n", x);
        scanf("%i", &A[x].defesa);

        printf("digite a resistencia forte da criatura %i \n", x);
        scanf("%i", &A[x].resFo);

        printf("digite a resistencia media da criatura %i \n", x);
        scanf("%i", &A[x].resM);

        printf("digite a resistencia fraca da criatura %i \n", x);
        scanf("%i", &A[x].resFr);

        printf("digite os pontos de vida da criatura %i \n", x);
        scanf("%i", &A[x].pv);

        printf("digite a CD efeito da criatura, se não tiver deixe nulo %i \n", x);
        scanf("%i", &A[x].CD);
        printf("digite a quantidade de pontos de mana da criatura, se não tiver deixe nulo %i \n", x);
        scanf("%i", &A[x].PM);
    }

    for (int z = 0; z < y; z++)
    {
        mostrar(A[z], z);
    }
}

void mostrar(Monstro m, int numero)
{
    printf("o Monstro numero  %i possui o nome %s, \n ele tem  %i de bonus de acerto, dando um dano medio de %f\n de resistencias ele possui %i de resistencia forte, %i de resistencia media e %i de resistencia fraca\n as habilidades possuem CD de: %i, com um total de PMs de: %i\n", numero + 1, m.nome, m.Vatq, m.dano, m.resFo, m.resM, m.resFr, m.CD, m.PM);
    printf("------------------------------------------------------------------\n");
}
