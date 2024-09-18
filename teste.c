#include <stdio.h>

int main(void)
{
    float nd;
for(int x = 1; x < 600; x++){
    if(x<=40){
nd = 0.16 * x - 0.89;

    }
    else if(x<=80){
        nd = 0.17 * x - 3.33;
    }
    

nd=0.06 * x + 2.63 ;
 

printf("%i = %f\n", x, nd);
}}
//40-