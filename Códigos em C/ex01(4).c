/*ex 01 - Lista 4*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op, n1, n2;
    printf("Escolha uma das opcoes: \n");
    printf("1- Soma de 2 numeros; \n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor); \n");
    printf("3- Produto entre 2 numeros; \n");
    printf("4- Divisão entre 2 numeros (o denominador nao pode ser zero). \n");
    scanf("%d", &op);
    
    switch (op){
        case 1:
        printf("Digite o primeiro numero: \n");
        scanf("%d", &n1);
        printf("Digite o segundo numero: \n");
        scanf("%d", &n2);
        printf("A soma dos numero eh: %d\n", n1+n2);
        break;
        case 2:
        printf("Digite o primeiro numero: \n");
        scanf("%d", &n1);
        printf("Digite o segundo numero: \n");
        scanf("%d", &n2);
        if (n1>n2){
            printf("A diferenca entre os numeros eh: %d\n", n1 - n2);
        } else {
            printf("A diferenca entre os numeros eh: %d\n", n2 - n1);
        }
        break;
        case 3:
        printf("Digite o primeiro numero: \n");
        scanf("%d", &n1);
        printf("Digite o segundo numero: \n");
        scanf("%d", &n2);
        printf("O produto entre os dois eh: %d\n", n1 * n2);
        break;
        case 4:
        printf("Digite o primeiro numero: \n");
        scanf("%d", &n1);
        printf("Digite o segundo numero: \n");
        scanf("%d", &n2);
        if (n2 == 0){
            printf("Erro: Divisao por zero. \n");
        } else {
            printf("A divisao dos numeros eh: %d\n", n1 / n2);
        }
        break;
        default: printf("Opcao invalida! \n");
    }

    return 0;
}
