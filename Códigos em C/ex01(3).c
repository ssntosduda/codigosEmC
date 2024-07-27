/*ex 01 - Lista 3*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C;
    int triangulo;
    printf("Digite o valor de A: \n");
    scanf("%f", &A);
    printf("Digite o valor de B: \n");
    scanf("%f", &B);
    printf("Digite o valor de C: \n");
    scanf("%f", &C);
    if (A>C+B || B>C+A || C>A+B) {
       triangulo = 0;
       printf("Nao formam um triangulo \n");
    }else {
        if (A == B && B == C){
            printf("Eh um triangulo Equilatero \n");
        }else if (A == B || B == C || A == C){
            printf("Eh um triangulo Isoceles \n");
        }else {
            printf("Eh um triangulo Escaleno \n");
        }
    }

    return 0;
}
