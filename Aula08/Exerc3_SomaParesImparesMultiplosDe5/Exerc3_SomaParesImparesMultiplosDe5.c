#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Declaração das variáveis
	int vetorInteiros[20], cont;
	int somaPares, somaImpares;
	
	// Inicialização de variáveis, para evitar lixo de memória
	cont = 0;
	somaPares = 0;
	somaImpares = 0;
	
	// Loop para preencher os valores do vetor, digitados pelo usuário
	for(cont = 0; cont < 20; cont++){
		
		// Leitura dos dados
		printf("Informe o valor da posicao %d do vetor: ", cont);
		scanf("%d", &vetorInteiros[cont]);
		
		// Se o valor digitado MOD 2 tiver resto zero, significa que ele é par, então soma a variável dos pares
		if(vetorInteiros[cont] % 2 == 0){
			somaPares += vetorInteiros[cont];
		}
		else // Senão, ele é impar, então soma a variável dos impares
		{
			somaImpares += vetorInteiros[cont];
		}
	}	
	
	// Imprime o resultado dos somatórios
	printf("\nA soma de todos os numeros pares do vetor e: %d.\n", somaPares);
	printf("A soma de todos os numeros impares do vetor e: %d.\n", somaImpares);
	
	// Imprime quem são os múltiplos de 5
	printf("Os multiplos de 5 sao:\n");
	
	// Faz o loop no vetor preenchido
	for(cont = 0; cont < 20; cont++){
		
		// Se o valor da posição MOD 5 tiver resto zero, significa que ele é múltiplo de 5 então imprime ele
		if(vetorInteiros[cont] % 5 == 0)
		{
			printf("%d ", vetorInteiros[cont]);
		}
	}
	
	return 0;
}
