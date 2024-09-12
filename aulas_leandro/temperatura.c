#include <stdio.h>

int main()
{

    float temperatura;
printf("insira a temperatura em celcius:\n");
scanf("%f", &temperatura);
printf("a temperatura em graus celcius para fahrenheint é: %f", (temperatura*9/5)+32);

    return 0;
}
