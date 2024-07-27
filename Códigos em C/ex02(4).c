/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, quant;
    float t;
    printf("Digite o codigo do produto: \n");
    scanf("%d", &cod);
    printf("Insira a quantidade de produtos: \n");
    scanf("%d", &quant);
    switch (cod){
        case 100: t = quant*1.20; break;
        case 101: t = quant*1.30; break;
        case 102: t = quant*1.50; break;
        case 103: t = quant*1.20; break;
        case 104: t = quant*1.70; break;
        case 105: t = quant*2.20; break;
        case 106: t = quant*1.00; break;
        default: printf("Este codigo nao existe, tente novamente \n");
    }
    printf ("O valor total eh: %.2f\n", t);
    system ("pause");
    return 0;
}

