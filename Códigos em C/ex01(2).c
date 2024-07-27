/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha = 1234, Susuario ;
    printf("Digite uma senha de 4 numeros: \n");
    scanf("%d", &Susuario);
    if (Susuario == senha){
        printf("Acesso Permitido \n");
    }else{
        printf("Acesso Negado  \n");
    }

    return 0;
}
