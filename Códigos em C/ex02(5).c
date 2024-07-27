#include <stdlib.h>
#include <stdio.h>

int main()
{
    int op;
    float kmh, ms;
    while(op !=  3){
    printf("1. Converter km/h para m/s; \n");
    printf("2. Coverter m/s para km/h; \n");
    printf("3. Finalizar o programa. \n");
    printf("Escolha a sua opcao: \n");
    scanf("%d", &op);
    
    if (op == 1){
        printf("Digite a velocidade em km/h: \n");
        scanf("%f", &kmh);
        ms = kmh * 1000/ 3600;
        printf ("%.2f km/h equilvale a %.2f m/s \n", kmh, ms);
    }else if (op == 2){
        printf("Digite a velocidade em m/s: \n");
        scanf("%f", &ms);
        kmh = ms * 3600 / 1000;
        printf ("%.2f ms equilvale a %.2f km/h \n", ms, kmh);
    }else if (op < 1 || op > 3){
        printf ("Opcao invalida! Digite um numero entre 1 e 3 \n");
    }
    }
    printf("\n Programa Finalizado \n");
    return 0;
    
}
