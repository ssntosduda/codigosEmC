#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
   
   float valor;
  
   while (1){
       printf("Digite um valor (ou 0 para finalizar): \n");
       scanf("%f", &valor);
       if (valor <= 0){
           break;
       }

       printf("Quadrado: %.2f \n", valor * valor);
       printf("Cubo: %.2f \n", valor * valor * valor);
       printf("Raiz: %.2f \n", sqrt(valor));
       
   }
   printf("\n Voce finalizou o programa \n");
   
    return 0;
    
}
