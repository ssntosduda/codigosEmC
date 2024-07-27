/*Exercicio 1*/

#include <stdio.h>
#include <stdlib.h>

//define o tamanho da matriz
#define tamanho 4
int main()
{
    int matriz[tamanho][tamanho];
    int linhaMaior, colunaMaior, i, j;
    int maiorValor = matriz[0][0];
    
    //lendo a matriz
    for(i = 0; i < tamanho; i++){
        for (j = 0; j < tamanho; j++){
            printf("Digite o elemento[%d][%d]: \n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    //encontrar o maior valor
    linhaMaior = 0;
    colunaMaior = 0;
    
    for (i = 0; i < tamanho; i++){
        for (j = 0; j < tamanho; j++){
            if(matriz[i][j] > maiorValor){
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }
    
    //Imprimindo a matriz
     for (i = 0; i < tamanho; i++){
        for (j = 0; j < tamanho; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
     

    //mostrando a localizandodo maior valor
    printf("\nLocalização do maior valor (%d): Linha %d, Coluna %d\n", maiorValor, linhaMaior, colunaMaior);
    
    
    return 0;
}
