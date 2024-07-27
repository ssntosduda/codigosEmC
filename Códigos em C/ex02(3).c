/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, tempo;
    printf("Digite sua idade: \n");
    scanf ("%d", &idade);
    printf("Digite seu tempo de trabalho: \n");
    scanf ("%d", &tempo);
    if (idade >= 60 || tempo >= 25) {
        printf ("Voce pode se aposentar");
    }else {
        printf ("Voce nao pode se aposentar");
    }
    
    return 0;
}
