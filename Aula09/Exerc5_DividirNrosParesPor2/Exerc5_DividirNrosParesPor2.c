#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Declaração das variáveis
	int matrizInteiros[3][3];
	int cont1, cont2;	
	
	// Inicialização dos contadores
	cont1 = 0;
	cont2 = 0;
	
	// Faz a leitura dos numeros digitados , verifica se ele é par fazendo valor MOD 2 e se o resto é zero
	// Se for par, ele irá dividir o valor daquela posição por 2
	for(cont1 = 0; cont1 < 3; cont1++)
	{
		for(cont2 = 0; cont2 < 3; cont2++)
		{
			printf("Informe o valor da posicao %d,%d da matriz: ", cont1, cont2);
			scanf("%d", &matrizInteiros[cont1][cont2]);
			
			if(matrizInteiros[cont1][cont2] % 2 == 0)
			{
				matrizInteiros[cont1][cont2] = matrizInteiros[cont1][cont2] / 2;
			}
		}
	}
	
	// Faz a montagem e exibição da matriz resultante
	printf("A matriz resultante, dividindo os numeros pares por 2 e: \n");
	for(cont1 = 0; cont1 < 3; cont1++)
	{
		for(cont2 = 0; cont2 < 3; cont2++)
		{
			printf("%d ", matrizInteiros[cont1][cont2]);
		}
		
		// Quebra a linha em cada linha da matriz
		printf("\n");
	}	
	
	return 0;
}
