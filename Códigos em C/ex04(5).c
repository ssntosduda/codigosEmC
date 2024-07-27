#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
   float altChico = 1.50, altZe = 1.10;
   int anos = 0;
   
   while (altZe <= altChico){
       altChico += 0.02;
       altZe += 0.03;
       
       anos++;
   }
    printf("Serao necessarios %d anos para que Ze seja maior que Chico. \n ", anos);
    
    return 0;
}
