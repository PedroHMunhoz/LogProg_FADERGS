#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Declaração das variáveis
	int matrizInteiros[3][3][3];
	int cont1, cont2, cont3;	
	
	// Inicialização dos contadores
	cont1 = 0;
	cont2 = 0;
	cont3 = 0;
	
	// Faz a leitura dos numeros digitados , verifica se ele é impar fazendo o valor MOD 2 e se o resto for diferente de zero
	// signfica que é ímpar, logo multiplica seu valor por 5
	for(cont1 = 0; cont1 < 3; cont1++)
	{
		for(cont2 = 0; cont2 < 3; cont2++)
		{
			for(cont3 = 0; cont3 < 3; cont3++)
			{
				printf("Informe o valor da posicao %d,%d,%d da matriz: ", cont1, cont2, cont3);
				scanf("%d", &matrizInteiros[cont1][cont2][cont3]);
			
				if(matrizInteiros[cont1][cont2][cont3] % 2 != 0)
				{
					matrizInteiros[cont1][cont2][cont3] = matrizInteiros[cont1][cont2][cont3] * 5;
				}
			}		
		}
	}
	
	// Faz a montagem e exibição da matriz resultante
	printf("A matriz resultante com os numeros impares multiplicados por 5 e: \n");
	for(cont1 = 0; cont1 < 3; cont1++)
	{
		for(cont2 = 0; cont2 < 3; cont2++)
		{
			for(cont3 = 0; cont3 < 3; cont3++)
			{
				printf("%d ", matrizInteiros[cont1][cont2][cont3]);
			}
			
			// Quebra a linha em cada linha da matriz
			printf("\n");	
		}
		
		// Quebra a linha em cada linha da matriz
		printf("\n");
	}	
	
	return 0;
}
