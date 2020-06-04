#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Declara��o das vari�veis
	char vetorFrase[100], vetorFraseInvertida[100];
	int cont, contInvertido, tamanhoPalavra;
	
	// Inicializa��o do contador
	cont = 0;
	contInvertido = 0;
	
	// Solicita ao usu�rio que digite a frase e faz a leitura para dentro do vetor
	printf("Digite uma frase qualquer: ");
	gets(vetorFrase);	
	
	// Captura o tamanho da palavra digitada, para usar no FOR
	tamanhoPalavra = strlen(vetorFrase);

	// Aqui, vamos come�ar o contador no tamanho - 1, para pegar a palavra de tr�s para frente e desconsiderar o caracter do enter
	// Em cada repeti��o, atribuimos na posi��o do vetorFraseInvertida que come�a em 0 o valor atual de vetorFrase, que come�a no final
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
