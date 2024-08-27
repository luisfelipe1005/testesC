#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int Vatq;
    int notadois;
    int notatres;
    int media;
} aluno;

int main(void)
{
    aluno A[10];

    for (int x = 1; x <= 10; x++)
    {
        printf("digite nome do aluno %i \n", x);
        scanf("%s", A[x].nome);
        printf("digite a nota 1 do aluno %i \n", x);
        scanf("%f", &A[x].notaum);

        printf("digite a nota 2 do aluno %i \n", x);
        scanf("%f", &A[x].notadois);

        printf("digite a nota 3 do aluno %i \n", x);
        scanf("%f", &A[x].notatres);
    }

    for (int y = 1; y <= 10; y++)
    {
        A[y].media = A[y].notaum + A[y].notadois + A[y].notatres;
        A[y].media = A[y].media / 3;
        printf("a media do aluno %i é: %f \n", y, A[y].media);
    }
}