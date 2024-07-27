#include <stdio.h>
#include <stdlib.h>

int main() {
  float valor, kmh, ms;
  int op;

  do {
    printf("1. Converter km/h para m/s\n");
    printf("2. Converter m/s para km/h\n");
    printf("3. Finalizar o programa. \n");
    printf("Digite sua opcao: ");
    scanf("%d", &op);

    switch (op) {
      case 1:
        printf("\nDigite o valor em km/h: ");
        scanf("%f", &valor);

        ms = valor * (1000.0 / 3600.0); // Fórmula para conversão
        printf("%.2f km/h equivalem a %.2f m/s\n", valor, ms);
        break;

      case 2:
        printf("\nDigite o valor em m/s: ");
        scanf("%f", &valor);

        kmh = valor * (3600.0 / 1000.0); // Fórmula para conversão
        printf("%.2f m/s equivalem a %.2f km/h\n", valor, kmh);
        break;

      case 3:
        printf("\n Programa Finalizado.\n");
        break;

      default:
        printf("\nOpcao invalida! Tente novamente.\n");
    }
  } while (op != 3);

  return 0;
}