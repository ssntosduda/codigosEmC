/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, L, x;
    printf("Digite a distancia em Km: \n");
    scanf ("%f", &d);
    printf ("Digite a quantidade de litros de gasolina: \n");
    scanf ("%f", &L);
    x = d/L;
    if (x < 8){
        printf ("Venda o carro");
    } else if (8 > x > 12){
        printf ("Economico!");
    } else {
        printf ("Super economico!");
    }
    
    return 0;
}
