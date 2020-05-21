#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Declaração das variáveis
	int vetorInteiros1[10], vetorInteiros2[10], vetorResultado[10], cont;
	
	// Inicialização do contador
	cont = 0;
	
	// Loop para preencher os valores do vetor, digitados pelo usuário e popular o vetor de resultados
	for(cont = 0; cont < 4; cont++){
		
		// Leitura dos dados do primeiro vetor
		printf("Informe o valor da posicao %d do primeiro vetor: ", cont);
		scanf("%d", &vetorInteiros1[cont]);
		
		// Leitura de dados do segundo vetor
		printf("Informe o valor da posicao %d do segundo vetor: ", cont);
		scanf("%d", &vetorInteiros2[cont]);
		
		// Atribuindo no vetor de resultados, na mesma posição, a multiplicação dos valores dos dois vetores
		vetorResultado[cont] = vetorInteiros1[cont] * vetorInteiros2[cont];
	}
	
	// Imprime os resultados calculados
	printf("\nO vetor resultante tem os seguintes valores: \n");
	
	for(cont = 0; cont < 4; cont++)
	{
		printf("%d ", vetorResultado[cont]);
	}
	
	return 0;
}
