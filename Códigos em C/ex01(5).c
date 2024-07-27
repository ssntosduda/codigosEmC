#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, c;
    printf ("Digte um numero postivo: \n");
    scanf("%d", &num);
    printf("%d %d ", a, b );
    
    while (c <= num){
        c = a + b;
        if (c <= num) {
          printf("%d ", c); 
        }
        a = b;
        b = c;
    }
    printf(" \n");
        
    

    return 0;
}
