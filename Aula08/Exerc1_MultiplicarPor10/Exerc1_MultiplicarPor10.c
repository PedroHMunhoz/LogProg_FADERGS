#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Declara��o das vari�veis
	int vetorInteiros[10], cont;
	
	// Inicializa��o do contador
	cont = 0;
	
	// Loop para preencher os valores do vetor, digitados pelo usu�rio
	// e multiplica por 10 aquele valor lido
	for(cont = 0; cont < 10; cont++){
		
		// Leitura dos dados
		printf("Informe o valor da posicao %d do vetor: ", cont);
		scanf("%d", &vetorInteiros[cont]);
		
		// Multiplicando o valor digitado pelo usu�rio por 10 e armazenando na mesma posi��o
		vetorInteiros[cont] = vetorInteiros[cont] * 10;
	}
	
	// Para separar a leitura dos resultados
	printf("--------------------------------------------------\n");
	
	// Loop que ir� percorrer o vetor, imprimindo seus resultados
	for(cont = 0; cont < 10; cont++){
		printf("Resultado da posicao %d do vetor: %d\n", cont, vetorInteiros[cont]);
	}
	
	return 0;
}
