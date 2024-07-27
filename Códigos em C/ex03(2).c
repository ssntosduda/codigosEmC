/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Digite um numero: \n");
    scanf("%d", &n1);
    printf("Digite outro numero: \n");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("O primeiro numero eh maior");
    } else{
        printf("O segundo numero eh maior");
    }
    return 0;
}
