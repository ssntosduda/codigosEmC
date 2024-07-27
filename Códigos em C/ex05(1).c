/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int f, c;
   printf ("Digite uma temperatura em Fahrenheit: \n");
   scanf ("%d", &f);
   
   c = (f - 32) / 1.8;

   printf ("A temperatura em Celsius eh: %.2d \n", c);
   
   return 0;
}