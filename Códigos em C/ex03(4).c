#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, final;
    char estado[3];

    printf("Digite o valor do produto: \n");
    scanf("%f", &valor);

    printf("Digite a sigla do estado destino (MG, SP, RJ ou MS): \n");
    scanf("%s", estado);

    switch (estado[0]) {
        case 'M':
            if (estado[1] == 'G') {
                final = valor * 1.07;
                printf("O preco final do produto em MG eh: R$%.2f\n", final);
            } else if (estado[1] == 'S') {
                final = valor * 1.08;
                printf("O preco final do produto em MS eh: R$%.2f\n", final);
            } else {
                printf("Estado invalido!\n");
            } break;
        case 'S':
            if (estado[1] == 'P') {
                final = valor * 1.12;
                printf("O preco final do produto em SP eh: R$%.2f\n", final);
            } else {
                printf("Estado invalido! \n");
            } break;
        case 'R':
            if (estado[1] == 'J') {
                final = valor * 1.15;
                printf("O preço final do produto no RJ eh: R$%.2f\n", final);
            } else {
                printf("Estado invalido!\n");
            } break;
        default:
            printf("Estado invalido! Tente novamente \n");
            break;
    }

    return 0;
}
