/*Exercicio 2*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int valores[6], i;

  for (i = 0; i < 6; i++) {
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &valores[i]);
  }
  
  printf("\nValores lidos:\n");
  for (i = 0; i < 6; i++) {
    printf("%d ", valores[i]);
  }

  return 0;
}
