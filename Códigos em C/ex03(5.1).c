#include <stdio.h>
#include <stdlib.h>
#include <math.h> // (sqrt)

int main() {
  float valor;

  do {
    printf("Digite um valor (ou 0 para finalizar): \n");
    scanf("%f", &valor);

    if (valor >= 0) {
       printf("Quadrado: %.2f \n", valor * valor);
       printf("Cubo: %.2f \n", valor * valor * valor);
       printf("Raiz: %.2f \n", sqrt(valor));
    } else{
        printf("\nVoce finalizou o programa\n");
    }
  } while (valor == 0);

  printf("\nVoce finalizou o programa\n");

  return 0;
}
