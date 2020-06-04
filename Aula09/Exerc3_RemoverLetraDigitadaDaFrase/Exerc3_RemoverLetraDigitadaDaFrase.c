#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Declaração das variáveis
	char vetorFrase[100], vetorFraseLetraRemovida[100], letraParaRemover;
	int cont, contFraseRemovida, tamanhoFrase;	
	
	// Inicialização do contador
	cont = 0;
	contFraseRemovida = 0;
	
	// Solicita a frase para o usuário
	printf("Digite sua frase: ");
	gets(vetorFrase);
	
	// Solicita que o usuário digite a letra que quer remover da frase
	printf("Digite a letra que quer remover da frase: ");
	scanf("%c", &letraParaRemover);	
		
	// Salva o tamanho da frase digitada em uma variavel auxiliar, para uso no for
	tamanhoFrase = strlen(vetorFrase);
	
	// Faz o loop percorrendo a frase e trocando todas as letras iguais a digitada para vazio
	for(cont = 0; cont < tamanhoFrase; cont++)
	{
		// Se o valor atual do vetor for DIFERENTE da letra a ser removida, grava essa letra em outro vetor auxiliar
		// Esse vetor auxiliar irá ser formado apenas com as letras que não são iguais a que queremos remover, resultando assim num vetor com a frase digitada mas sem aquela letra
		if(vetorFrase[cont] != letraParaRemover)
		{
			vetorFraseLetraRemovida[contFraseRemovida] = vetorFrase[cont];	
			contFraseRemovida++;		
		}	
	}
	
	// Ajuste para fechar o vetor com o caracter de finalização (aqui deu bug sem ele, então coloquei)
	vetorFraseLetraRemovida[contFraseRemovida] = '\0'; 
	
	// Imprime o resultado
	printf("A frase com a letra %c removida ficou: %s", letraParaRemover, vetorFraseLetraRemovida);
	
	return 0;
}
