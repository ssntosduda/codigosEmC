#include <stdio.h>
#include <stdlib.h>

int main() {
  float altChico = 1.50, altZe = 1.10;     
  int anos = 0;              

  
  do {
    altChico += 0.02; 
    altZe += 0.03; 

    anos++; 

    if (altZe > altChico) {
      break; 
    }
  } while (1); //no C não tem um tipo de dado específico para armazenar valores booleanos: 0 = falso e qlqr outro valor é verdadeiro 

  // Exibe o resultado
  printf("\nSerão necessários %d anos para Zé ser maior que Chico.\n", anos);

  return 0;
}