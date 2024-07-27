#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, c;
    do{
    printf ("Digte um numero postivo: \n");
    scanf("%d", &num);
    // printf("%d %d ", a, b );
    
    } while (num <= 0);
        printf ("0 1 ");
        c = a + b;
        while(c <= num){
            printf("%d ", c);
            a = b;
            b = c;
            c = a + b;
        }

    printf(" \n");
        
    return 0;
}