#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Declara��o das vari�veis
	int vetorInteiros[10], cont;
	int maiorValor, menorValor;
	float totalValores, media;
	
	// Inicializa��o do contador
	cont = 0;
	maiorValor = 0;
	menorValor = 0;
	media = 0;
	totalValores = 0;
	
	// Loop para preencher os valores do vetor, digitados pelo usu�rio
	for(cont = 0; cont < 10; cont++){
		
		// Leitura dos dados
		printf("Informe o valor da posicao %d do vetor: ", cont);
		scanf("%d", &vetorInteiros[cont]);
		
		// Se o valor digitado for maior do que o maior valor atual, seta ele com o novo maior valor
		// Na primeira passada, ele sempre ir� setar esse valor, alterando somente quando a condi��o satisfazer nas pr�ximas passads
		if(vetorInteiros[cont] > maiorValor)
		{
			maiorValor = vetorInteiros[cont];
		}
		
		// Se o valor digitado for menor do que o menor valor atual ou o menor valor for 0, seta ele com o novo menor valor
		// Na primeira passda, ele sempre ir� setar esse valor, alterando somente quando a condi��o satisfazer nas pr�ximas passadas
		if(vetorInteiros[cont] < menorValor || menorValor == 0)
		{
			menorValor = vetorInteiros[cont];
		}	
		
		// Soma o valor atual digitado com o totalizador para termos o valor total
		totalValores += vetorInteiros[cont];
	}
	
	// Calcula a media
	media = totalValores / 10;
	
	// Imprime os resultados solicitados
	printf("A media dos valores digitados no vetor e: %.2f.\n", media);
	printf("O maior valor dentre os digitados e: %d.\n", maiorValor);
	printf("O menor valor dentre os digitados e: %d.\n", menorValor);	
	
	return 0;
}
