/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, x;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n1);
    if (n1 %2 == 0){
        printf("Seu numero eh par");
    }else {
        printf("Seu numero eh impar");
    }
    return 0;
}
