/*Exercicio 2*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i;
    for (i = 1; i <= 100; i ++){
        printf(" %d", i);
    }
    printf("\n \n");
    
    int j = 1;
    while (j <= 100){
        printf(" %d", j);
        j ++;
    }
    printf("\n \n");
    
    int k = 1;
    do {
        printf(" %d", k);
        k ++;
    } while (k <= 100);
    printf(" \n");
    

    return 0;
}
