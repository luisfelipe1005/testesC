#ifndef T20ANLZ_H
#define T20ANLZ_H

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

int teste(Monstro m);
int teste(Monstro bicho)
{
    float calc = 0;
    int arredondar = 0;
    int cont = 0;
    if (bicho.tipo == 1)
    {
        // calcula o valor de nd do valor de ataque
        printf("%d\n", bicho.Vatq);
        if (bicho.Vatq <= 6)
        {
            calc = +0.25;
        }
        else if (bicho.Vatq <= 7)
        {
            calc = +0.5;
        }
        else if (bicho.Vatq <= 9)
        {
            calc = +1;
        }
        else if (bicho.Vatq <= 12)
        {
            calc = +2;
        }
        else if (bicho.Vatq <= 14)
        {
            calc = +3;
        }
        else if (bicho.Vatq <= 16)
        {
            calc = +4;
        }
        else if (bicho.Vatq == 17)
        {
            calc = +5;
        }
        else if (bicho.Vatq <= 20)
        {
            calc = +6;
        }
        else if (bicho.Vatq <= 24)
        {
            calc = +7;
        }
        else if (bicho.Vatq <= 26)
        {
            calc = +8;
        }
        else if (bicho.Vatq == 27)
        {
            calc = +9;
        }
        else if (bicho.Vatq <= 29)
        {
            calc = +10;
        }
        else if (bicho.Vatq <= 34)
        {
            calc = +11;
        }
        else if (bicho.Vatq <= 36)
        {
            calc = +12;
        }
        else if (bicho.Vatq == 37)
        {
            calc = +13;
        }
        else if (bicho.Vatq <= 39)
        {
            calc = +14;
        }
        else if (bicho.Vatq <= 43)
        {
            calc = +15;
        }
        else if (bicho.Vatq <= 46)
        {
            calc = +16;
        }
        else if (bicho.Vatq == 47)
        {
            calc = +17;
        }
        else if (bicho.Vatq <= 49)
        {
            calc = +18;
        }
        else if (bicho.Vatq <= 52)
        {
            calc = +19;
        }
        else if (bicho.Vatq <= 54)
        {
            calc = +20;
        }
        else if (bicho.Vatq <= 58)
        {
            calc = +21;
        }
        else
        {
            calc = +22;
        }

        // calcula o valor da nd baseado em dano medio
        printf("%d\n", bicho.dano);
        if (bicho.dano <= 8)
        {
            calc = +0.25;
        }
        else if (bicho.dano <= 10)
        {
            calc = +0.5;
        }
        else if (bicho.dano <= 15)
        {
            calc = +1;
        }
        else if (bicho.dano <= 18)
        {
            calc = +2;
        }
        else if (bicho.dano <= 21)
        {
            calc = +3;
        }
        else if (bicho.dano <= 24)
        {
            calc = +4;
        }
        else if (bicho.dano == 27)
        {
            calc = +5;
        }
        else if (bicho.dano <= 40)
        {
            calc = +6;
        }
        else if (bicho.dano <= 56)
        {
            calc = +7;
        }
        else if (bicho.dano <= 62)
        {
            calc = +8;
        }
        else if (bicho.dano == 68)
        {
            calc = +9;
        }
        else if (bicho.dano <= 74)
        {
            calc = +10;
        }
        else if (bicho.dano <= 80)
        {
            calc = +11;
        }
        else if (bicho.dano <= 130)
        {
            calc = +12;
        }
        else if (bicho.dano == 144)
        {
            calc = +13;
        }
        else if (bicho.dano <= 158)
        {
            calc = +14;
        }
        else if (bicho.dano <= 172)
        {
            calc = +15;
        }
        else if (bicho.dano <= 186)
        {
            calc = +16;
        }
        else if (bicho.dano == 200)
        {
            calc = +17;
        }
        else if (bicho.dano <= 270)
        {
            calc = +18;
        }
        else if (bicho.dano <= 288)
        {
            calc = +19;
        }
        else if (bicho.dano <= 306)
        {
            calc = +20;
        }
        else if (bicho.dano <= 324)
        {
            calc = +21;
        }
        else
        {
            calc = +22;
        }
        // calcula o valor de nd baseado na defesa
        printf("%d\n", bicho.defesa);
        if (bicho.defesa <= 11)
        {
            calc = +0.25;
        }
        else if (bicho.defesa <= 14)
        {
            calc = +0.5;
        }
        else if (bicho.defesa <= 16)
        {
            calc = +1;
        }
        else if (bicho.defesa <= 19)
        {
            calc = +2;
        }
        else if (bicho.defesa <= 21)
        {
            calc = +3;
        }
        else if (bicho.defesa <= 23)
        {
            calc = +4;
        }
        else if (bicho.defesa == 24)
        {
            calc = +5;
        }
        else if (bicho.defesa <= 27)
        {
            calc = +6;
        }
        else if (bicho.defesa <= 31)
        {
            calc = +7;
        }
        else if (bicho.defesa <= 33)
        {
            calc = +8;
        }
        else if (bicho.defesa == 34)
        {
            calc = +9;
        }
        else if (bicho.defesa <= 36)
        {
            calc = +10;
        }
        else if (bicho.defesa <= 41)
        {
            calc = +11;
        }
        else if (bicho.defesa <= 43)
        {
            calc = +12;
        }
        else if (bicho.defesa == 44)
        {
            calc = +13;
        }
        else if (bicho.defesa <= 46)
        {
            calc = +14;
        }
        else if (bicho.defesa <= 50)
        {
            calc = +15;
        }
        else if (bicho.defesa <= 53)
        {
            calc = +16;
        }
        else if (bicho.defesa == 54)
        {
            calc = +17;
        }
        else if (bicho.defesa <= 56)
        {
            calc = +18;
        }
        else if (bicho.defesa <= 59)
        {
            calc = +19;
        }
        else if (bicho.defesa <= 61)
        {
            calc = +20;
        }
        else if (bicho.defesa <= 65)
        {
            calc = +21;
        }
        else
        {
            calc = +22;
        }
        // calcula o valor de nd baseado na resFo
        printf("%d\n", bicho.resFo);
        if (bicho.resFo <= 3)
        {
            calc = +0.25;
        }
        else if (bicho.resFo <= 6)
        {
            calc = +0.5;
        }
        else if (bicho.resFo <= 11)
        {
            calc = +1;
        }
        else if (bicho.resFo <= 13)
        {
            calc = +2;
        }
        else if (bicho.resFo <= 15)
        {
            calc = +3;
        }
        else if (bicho.resFo <= 16)
        {
            calc = +4;
        }
        else if (bicho.resFo == 17)
        {
            calc = +5;
        }
        else if (bicho.resFo <= 18)
        {
            calc = +6;
        }
        else if (bicho.resFo <= 20)
        {
            calc = +7;
        }
        else if (bicho.resFo <= 21)
        {
            calc = +8;
            arredondar = +9;
            cont++;
        }
        else if (bicho.resFo <= 22)
        {
            calc = +10;
        }
        else if (bicho.resFo <= 24)
        {
            calc = +11;
        }
        else if (bicho.resFo <= 26)
        {
            calc = +12;
            arredondar = +13;
            cont++;
        }
        else if (bicho.resFo <= 28)
        {
            calc = +14;
            arredondar = +15;
            cont++;
        }
        else if (bicho.resFo <= 30)
        {
            calc = +16;

            arredondar = +17;
            cont++;
        }
        else if (bicho.resFo <= 32)
        {
            calc = +18;
            arredondar = +19;
            cont++
        }
        else if (bicho.resFo <= 34)
        {
            calc = +20;
        }
        else if (bicho.resFo <= 36)
        {
            calc = +21;
        }
        else
        {
            calc = +22;
        }

        // calcula o valor de nd baseado na resM
        printf("%d\n", bicho.resM);
        if (bicho.resM <= 0)
        {
            calc = +0.25;
        }
        else if (bicho.resM <= 3)
        {
            calc = +0.5;
        }
        else if (bicho.resM <= 5)
        {
            calc = +1;
        }
        else if (bicho.resM <= 7)
        {
            calc = +2;
        }
        else if (bicho.resM <= 9)
        {
            calc = +3;
        }
        else if (bicho.resM <= 10)
        {
            calc = +4;
        }
        else if (bicho.resM == 11)
        {
            calc = +5;
        }
        else if (bicho.resM <= 12)
        {
            calc = +6;
        }
        else if (bicho.resM <= 14)
        {
            calc = +7;
        }
        else if (bicho.resM <= 15)
        {
            calc = +8;
            arredondar = +9;
            cont++;
        }
        else if (bicho.resM <= 16)
        {
            calc = +10;
        }
        else if (bicho.resM <= 18)
        {
            calc = +11;
        }
        else if (bicho.resM <= 20)
        {
            calc = +12;
            arredondar = +13;
            cont++;
        }
        else if (bicho.resM <= 22)
        {
            calc = +14;
            arredondar = +15;
            cont++;
        }
        else if (bicho.resM <= 24)
        {
            calc = +16;
            arredondar = +17;
            cont++;
        }
        else if (bicho.resM <= 26)
        {
            calc = +18;
            arredondar = +19;
        }
        else if (bicho.resM <= 28)
        {
            calc = +20;
        }
        else if (bicho.resM <= 30)
        {
            calc = +21;
        }
        else
        {
            calc = +22;
        }

        // calcula o valor de nd baseado na resFr
        printf("%d\n", bicho.resFr);
        if (bicho.resFr >= 31)
        {
            calc = +22
        }
        else if (bicho.resFr >= 29)
        {
            calc = +21
        }
        else
        {
            int Frcont = 0;
            for (int i = -2, i < bicho.resFr, i++)
            {
                Frcont++;
            }
        }
        printf(" teste %f\n", calc);
    }
}

#endif