#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Declara��o das vari�veis
	int vetorInteiros[20], cont;
	int somaPares, somaImpares;
	
	// Inicializa��o de vari�veis, para evitar lixo de mem�ria
	cont = 0;
	somaPares = 0;
	somaImpares = 0;
	
	// Loop para preencher os valores do vetor, digitados pelo usu�rio
	for(cont = 0; cont < 20; cont++){
		
		// Leitura dos dados
		printf("Informe o valor da posicao %d do vetor: ", cont);
		scanf("%d", &vetorInteiros[cont]);
		
		// Se o valor digitado MOD 2 tiver resto zero, significa que ele � par, ent�o soma a vari�vel dos pares
		if(vetorInteiros[cont] % 2 == 0){
			somaPares += vetorInteiros[cont];
		}
		else // Sen�o, ele � impar, ent�o soma a vari�vel dos impares
		{
			somaImpares += vetorInteiros[cont];
		}
	}	
	
	// Imprime o resultado dos somat�rios
	printf("\nA soma de todos os numeros pares do vetor e: %d.\n", somaPares);
	printf("A soma de todos os numeros impares do vetor e: %d.\n", somaImpares);
	
	// Imprime quem s�o os m�ltiplos de 5
	printf("Os multiplos de 5 sao:\n");
	
	// Faz o loop no vetor preenchido
	for(cont = 0; cont < 20; cont++){
		
		// Se o valor da posi��o MOD 5 tiver resto zero, significa que ele � m�ltiplo de 5 ent�o imprime ele
		if(vetorInteiros[cont] % 5 == 0)
		{
			printf("%d ", vetorInteiros[cont]);
		}
	}
	
	return 0;
}
