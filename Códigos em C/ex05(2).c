/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data, x;
    printf("Digite seu ano de nascimento: \n");
    scanf("%d", &data);
    x = 2024 - data;
    if (x >= 16){
        printf("Voce vai votar na proxima eleicao");
    }else{
        printf("Nao vai votar na proxima eleicao");
    }
    return 0;
}
