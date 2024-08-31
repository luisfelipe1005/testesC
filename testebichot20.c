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
    int ND;
    int tipo;
} Monstro;

void mostrar(Monstro bicho, int numero);
Monstro criar(int numero);

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
        A[x] = criar(x + 1);
    }

    for (int z = 0; z < y; z++)
    {
        mostrar(A[z], z + 1);
    }
}

void mostrar(Monstro m, int numero)
{
    printf("o Monstro numero  %i possui o nome %s, sendo do tipo ", numero, m.nome);
    if (m.tipo == 1)
    {
        printf("solo");
    }
    else if (m.tipo == 2)
    {
        printf("lacaio");
    }
    else if (m.tipo == 3)
    {
        printf("especial");
    }

    printf("\n ele tem  %i de bonus de acerto, dando um dano medio de %f\n de resistencias ele possui %i de resistencia forte, %i de resistencia media e %i de resistencia fraca\n \n", m.Vatq, m.dano, m.resFo, m.resM, m.resFr);

    if (strcmp(m.CD, "") == 0)
    {
        printf("sua CD de efeito é %i", m.CD);
    }

    if (strcmp(m.CD, "") == 0)
    {
        printf("possuindo %i de PM's", m.PM);
    }

    printf("------------------------------------------------------------------\n");
}

// função que preenche a classe monstro com suas informações pelo usuario
Monstro criar(int x)
{
    Monstro m;
    // pérgunta e respostas são variaveis feitas para guardar as respostas do usuario
    char pergunta[4];
    int resposta = 0;
    printf("digite nome do Monstro %i \n", x);
    scanf("%s", m.nome);
    printf("digite o valor de ataque do Monstro %i \n", x);
    scanf("%i", &m.Vatq);
    printf("digite o nivel de desafio do Monstro %i \n", x);
    scanf("%f", &m.ND);
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

    printf("digite o tipo de monstro: 1-solo, 2-lacaio e 3-especial\n", x);
    scanf("%i", &m.tipo);
    // ambos esses do-while servem para perguntar se o usuario quer adicionar alguma coisa opcional, caso queira pede para adicionar, do contrario ele preenche com um nulo.
    do
    {
        printf("você quer colocar alguma cd na criatura %i , se sim escreva ''sim'', do contrario escreva 'nao' \n", x);

        scanf("%s", pergunta);
        // essa gambiarra ve se o usuario mandou "sim" ou não até ele escolher um dos dois, com um sim ele pode escrever o atributo, do contrario ele fica nulo

    } while (strcmp(pergunta, "sim") != 0 && strcmp(pergunta, "nao") != 0);
    if (strcmp(pergunta, "sim") == 0)
    {
        printf("digite a CD efeito da criatura %i: \n", x);
        scanf("%i", &m.CD);
    }
    else
    {
        m.CD = "";
    }
    pergunta == "";
    do
    {
        printf("você quer colocar PM's na criatura %i , se sim escreva ''sim'', do contrario escreva 'nao'  \n", x);

        scanf("%s", pergunta);
    } while (strcmp(pergunta, "sim") == 0 && strcmp(pergunta, "nao") == 0);
    if (strcmp(pergunta, "sim") == 0)

    {

        printf("digite a quantidade de pontos de mana da criatura %i \n", x);
        scanf("%i", &m.PM);
    }
    else
    {
        m.PM = "";
    }

    return m;
}