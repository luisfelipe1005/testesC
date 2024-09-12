
#include <stdio.h>
#define distancia 1060
#define valrs 6.15
#define valur 2.30
#define cotacao 5.57
int main()
{
    float capacidade,autonomia, kml;
printf("insira a capacidade do tanque:\n");
scanf("%f", &capacidade);
printf("insira a quantos km o veiculo faz por litro:\n");
scanf("%f", &kml);
autonomia = capacidade * kml;
//720


float liusado = distancia/kml;

printf("a viagem consumira %.1f de litros, gastando %.2f no brasil ", liusado, capacidade * valrs );
printf("e %.2f no uruguai \n", (distancia - autonomia)/kml*valur*cotacao);
                                //720 - (720-1060)
                                //362
    return 0;
}
