/*ex 2 - Lista 1*/

/* Segundo Projeto do Semestre 
   11/03/2024
   Eduarda Santos               */
   
#include <stdio.h>
#include <stdlib.h>

int main()
{
   float d, l, media;
   printf ("Informe a distancia em km: \n");
   scanf ("%f", &d);
   printf ("Informe o total de litros: \n");
   scanf ("%f", &l);
   media = d/l;
   printf ("O consumo medio eh de: %.2f km/l \n ", media);
   
   return 0;
}

