/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;
    printf("Digite sua N1: \n");
    scanf("%f", &n1);
    printf("Digite sua N2: \n ");
    scanf("%f", &n2);
     media = (n1 + n2)/2;
    if (media >= 6 ){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
    return 0;
}
