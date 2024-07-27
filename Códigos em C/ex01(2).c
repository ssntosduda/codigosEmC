/*ex 02 - Lista 2*/

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
