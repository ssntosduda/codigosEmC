/*ex 2 - Lista 2*/

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
