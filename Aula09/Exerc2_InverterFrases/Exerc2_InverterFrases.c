#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Declaração das variáveis
	char vetorFrase[100], vetorFraseInvertida[100];
	int cont, contInvertido, tamanhoPalavra;
	
	// Inicialização do contador
	cont = 0;
	contInvertido = 0;
	
	// Solicita ao usuário que digite a frase e faz a leitura para dentro do vetor
	printf("Digite uma frase qualquer: ");
	gets(vetorFrase);	
	
	// Captura o tamanho da palavra digitada, para usar no FOR
	tamanhoPalavra = strlen(vetorFrase);

	// Aqui, vamos começar o contador no tamanho - 1, para pegar a palavra de trás para frente e desconsiderar o caracter do enter
	// Em cada repetição, atribuimos na posição do vetorFraseInvertida que começa em 0 o valor atual de vetorFrase, que começa no final
	// Depois, incrementamos o segundo contador, do vetor invertido
	for(cont = tamanhoPalavra - 1; cont >= 0; cont--)
	{	
		vetorFraseInvertida[contInvertido] = vetorFrase[cont];
		contInvertido++;	
	}
	
	// Imprimimos a frase invertida, a partir do vetor gerado
	printf("A frase invertida e: %s", vetorFraseInvertida);
	
	return 0;
}
