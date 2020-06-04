#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Declaração das variáveis
	char vetorPalavra[100];
	int cont;	
	
	// Inicialização do contador
	cont = 0;
	
	// Solicita ao usuário que digite a palavra e faz a leitura para dentro do vetor
	printf("Digite uma palavra qualquer: ");
	gets(vetorPalavra);
	
	// Faz o loop comparando os valores e substituindo os mesmos
	for(cont = 0; cont < strlen(vetorPalavra); cont++)
	{
		if(vetorPalavra[cont] == 'a')
		{
			vetorPalavra[cont] = 'o';
		}
		
		if(vetorPalavra[cont] == 'A')
		{
			vetorPalavra[cont] = 'O';	
		}
	}
	
	printf("A nova palavra e: %s", vetorPalavra);
	
	return 0;
}
