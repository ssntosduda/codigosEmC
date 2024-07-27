
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, resultado;
    int opc;
    do{
    	printf ("digite a opcao desejada: \n Adicao (opcao 1)\n Subtracao (opcao2) \n Multiplicacao: (opcao 3)\n Divisao (opcao 4)\n Saida (opcao 5)\n");
        scanf ("%d", &opc);
        if(opc > 0 && opc < 5 ){
        	printf ("digite o primeiro numero:\n");
            scanf ("%f", &n1);
            printf ("digite o segundo numero:\n");
            scanf ("%f", &n2);
		}
        switch (opc){
        	case 1: resultado = n1+n2;
        	printf ("O resultado da operacao eh: %.2f\n\n", resultado);
			break;
        	case 2: resultado = n1-n2;
        	printf ("O resultado da operacao eh: %.2f\n\n", resultado);
			break;
        	case 3: resultado = n1*n2;
        	printf ("O resultado da operacao eh: %.2f\n\n", resultado);
			break;
        	case 4: if (n2 == 0){ 
			            printf ("Divisao por 0 nao eh possivel\n");
			        }else{
				        resultado = n1/n2;
				        printf ("O resultado da operacao eh: %.2f\n\n", resultado);
			        }
			        break;
        	case 5: printf ("Saindo da calculadora!!! \n");
			break;
        	default: printf ("opcao invalida! \n");
			break;
		}		
	} while (opc != 5);
    system ("pause");
	 return 0;
}
