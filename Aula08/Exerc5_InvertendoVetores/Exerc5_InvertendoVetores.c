#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Declaração das variáveis
	int vetorInteiros1[10], vetorInteiros2[10], contador, contVetor2;
	
	// Inicialização do contador
	contador = 0;
	contVetor2 = 9;
	
	// Loop para preencher os valores do vetor, digitados pelo usuário
	// e multiplica por 10 aquele valor lido
	for(contador = 0; contador < 10; contador++){
		
		// Leitura dos dados
		printf("Informe o valor da posicao %d do vetor: ", contador);
		scanf("%d", &vetorInteiros1[contador]);
		
		// Atribuindo os valores digitados oa vetor 2, porém de forma inversa
		vetorInteiros2[contVetor2] = vetorInteiros1[contador];
		
		// Decrementar o contador do vetor2, para ele ir atribuindo valores de trás para frente
		contVetor2--;		
	}
	
	// Imprime o Vetor1, após preenchido
	printf("\nO resultado do Vetor 1 e: \n");
	for(contador = 0; contador < 10; contador++)
	{
		printf("%d ", vetorInteiros1[contador]);
	}
	
	// Imprime o Vetor2, que é o Vetor1 porém em ordem invertida
	printf("\n\nO resultado do Vetor 2, que e o Vetor 1 porem invertido e: \n");
	for(contador = 0; contador < 10; contador++)
	{
		printf("%d ", vetorInteiros2[contador]);
	}
	return 0;
}
