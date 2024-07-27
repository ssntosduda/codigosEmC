/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

