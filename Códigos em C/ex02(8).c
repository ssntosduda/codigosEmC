/*Exercicio 2*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 5

//atividade para pensar e pesquisar bastante
int main() {
    int cartela[tamanho][tamanho];
    int i, j, n;

    // Gerar cartela de bingo
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            do {
                //gerando um numero *aleatório* entre 0 e 99
                n = rand() % 100;
                //verificando se o número já existe na cartela
                int repetido = 0;
                for (int k = 0; k <= i; k++) {
                    for (int l = 0; l < tamanho; l++) {
                        if (cartela[k][l] == n) {
                            repetido = 1;
                            break;
                        }
                    }
                    if (repetido) break;
                }
            } while (0);
            cartela[i][j] = n;
        }
    }

    //exibindo a cartela de bingo
    printf("A sua Cartela de Bingo:\n");
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            printf("%2d ", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}
