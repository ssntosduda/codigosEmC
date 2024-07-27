/*Exercicio 3*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define tamanho_conjunto 10

int main() {
  float conjunto[tamanho_conjunto], quad[tamanho_conjunto];
  int i;

  printf("Digite os 10 valores do conjunto:\n");
  for (int i = 0; i < tamanho_conjunto; i++) {
    scanf("%f", &conjunto[i]);
  }

  for (int i = 0; i < tamanho_conjunto; i++) {
    quad[i] = pow(conjunto[i], 2);
  }

  printf("\nConjunto original:\n");
  for (int i = 0; i < tamanho_conjunto; i++) {
    printf("%.2f ", conjunto[i]);
  }

  printf("\n\nConjunto dos quadrados:\n");
  for (int i = 0; i < tamanho_conjunto; i++) {
    printf("%.2f ", quad[i]);
  }

  return 0;
}