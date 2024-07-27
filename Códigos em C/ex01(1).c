/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


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
