/*ex 01 - Lista 1*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;
    printf("Informe sua nota N1: \n");
    scanf("%f", n1);
    printf("Informe sua nota N2: \n");
    scanf("%f", n2);
    media = (n1 + n2)/2;
    printf("Sua media eh: %.2f\n", media);
    
    return 0;
}
