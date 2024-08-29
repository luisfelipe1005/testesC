#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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
    float ND;
} Monstro;
// prototipos das funções picas.
void mostrar(Monstro bicho, int numero);
Monstro criar();

int main(void)
{
    // objeto Monstro é guardado em 99 variações, impossivel usuario criar mais monstros que isso
    int y;

    Monstro A[99];
    // aqui pergunta a quantidade de Monstros que se deseja avaliar, sendo utilizada no for
    printf("digite a quantidade de Monstros que deseja avaliar\n");
    scanf("%i", &y);

    // o for utilizado para a adição dos Monstros com suas informações levando até a função para criar
    for (int x = 0; x < y; x++)
    {
        A[x] = criar(x + 1);
    }

    for (int z = 0; z < y; z++)
    {
        mostrar(A[z], z + 1);
    }
}

void mostrar(Monstro m, int numero)
{
    printf("o Monstro numero  %i possui o nome %s, com a ND de %i \n ele tem  %i de bonus de acerto, dando um dano medio de %f\n de resistencias ele possui %i de resistencia forte, %i de resistencia media e %i de resistencia fraca\n as habilidades possuem CD de: %i, com um total de PMs de: %i\n", numero + 1, m.nome, m.ND, m.Vatq, m.dano, m.resFo, m.resM, m.resFr, m.CD, m.PM);
    printf("------------------------------------------------------------------\n");
}

Monstro criar(int x)
{
    Monstro m;
    char pergunta[3];
    printf("digite nome do Monstro %i \n", x);
    scanf("%s", m.nome);
    printf("digite a ND do Monstro %i \n", x);
    scanf("%s", m.ND);
    printf("digite o valor de ataque do Monstro %i \n", x);
    scanf("%i", &m.Vatq);

    printf("digite a media de dano do Monstro %i \n", x);
    scanf("%f", &m.dano);

    printf("digite a defesa do Monstro %i \n", x);
    scanf("%i", &m.defesa);

    printf("digite a resistencia forte da criatura %i \n", x);
    scanf("%i", &m.resFo);

    printf("digite a resistencia media da criatura %i \n", x);
    scanf("%i", &m.resM);

    printf("digite a resistencia fraca da criatura %i \n", x);
    scanf("%i", &m.resFr);

    printf("digite os pontos de vida da criatura %i \n", x);
    scanf("%i", &m.pv);
    printf("deseja inserir CD na criatura %i? use sim ou nao \n", x);
    scanf("%s", pergunta);
    do
    {
        if (pergunta == "sim")
        {
            printf("digite a CD efeito da criatura %i \n", x);
            scanf("%i", &m.CD);
        }
    } while (pergunta != "sim" || pergunta != "nao");
    do
    {
        if (pergunta == "sim")
        {
            printf("digite a quantidade de pontos de mana da criatura, se não tiver deixe nulo %i \n", x);
            scanf("%i", &m.PM);
        }

    } while (pergunta != "sim" || pergunta != "nao");
    return m;
}
