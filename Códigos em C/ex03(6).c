/*Exercicio 3*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float n, soma = 0, media, maior, menor;
    int qntd;
    
    printf("Digite os numeros (0 para finalizar): \n");
    
    while(1){
        scanf("%f", &n);
        
        if (n == 0) {
            break;
        }
        soma += n;
        qntd++;
        
        if(n > maior){
            maior = n;
        }
        
        if (n < menor){
            menor = n;
        }
    }
    if (qntd > 0){
        media = soma / qntd;
        
        printf("\n Resultados:\n");
        printf("- Soma: %.2f\n", soma);
        printf("- Quantidade: %d\n", qntd);
        printf("- Media: %.2f\n", media);
        printf("- Maior: %.2f\n", maior);
        printf("- Menor: %.2f\n", menor);
    } else {
        printf("\nNenhum numero foi digitado. \n");
    }

    return 0;
}
