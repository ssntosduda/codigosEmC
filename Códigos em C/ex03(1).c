/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a1, a2, x, y;
   printf ("Informe a medida de um dos angulos: \n");
   scanf ("%d", &a1);
   printf ("Informe a medida de outro angulo: \n");
   scanf ("%d", &a2);
   x = a1 + a2;
   y = 180 - x;
   printf ("O terceiro angulo mede: %.2d\n", y);
   
   return 0;
}