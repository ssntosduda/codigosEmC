/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cod, quant, t;
    printf("Digite o codigo do produto: \n");
    scanf("%f", &cod);
    printf("Insira a quantidade de produtos: \n");
    scanf("%f", &quant);
    if (cod == 100) t = quant*1.20;
    if (cod == 101) t = quant*1.30;
    if (cod == 102) t = quant*1.50;
    if (cod == 103) t = quant*1.20;
    if (cod == 104) t = quant*1.70;
    if (cod == 105) t = quant*2.20;
    if (cod == 106) t = quant*1.00;
    if (cod == 100) t = quant*1.20;
    else printf("Este codigo nao existe, tente novamente \n");
    printf ("O valor total eh: %.2f\n", t);
    
    return 0;
}
