/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, soma;
   printf ("Informe o numero de lados de um poligono convexo: \n");
   scanf ("%d", &n);
   
   soma = (n - 2) * 180;

   printf ("A soma dos angulos internos eh: %.2d\n", soma);
   
   return 0;
}