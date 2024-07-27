/*Exercicio 1*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6]={1, 0, 5, -2, -5, 7};
    int soma = a[0] + a[1] + a[5];
        printf("Soma dos valores a[0], a[1] e a[5]: %d\n", soma);
    
    a[4] = 100;
    
    for (int i = 0; i < 6; i++){
        printf("Valor a[%d]: %d\n", i, a[i]);
    }
    
    return 0;
}
