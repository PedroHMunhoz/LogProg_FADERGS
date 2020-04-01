#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	int numerolivro, tipousuario;
	
	//Inicialização de variáveis para evitar lixo
	numerolivro = 0;
	tipousuario = 0;
	
	printf("===== Impressao de Recibo de Biblioteca ===== \n\n");
	
	printf("Informe o numero do livro: ");
	scanf("%d", &numerolivro);
	
	printf("Informe o tipo de usuario (1-Professor | 2-Livro): ");
	scanf("%d", &tipousuario);
	
	//Professor
	if(tipousuario == 1)
	{
		printf("Numero do Livro: %d", numerolivro);
		printf("\nTipo de Usuario: Professor");
		printf("\nTotal de Dias: 10");
	}
	else //Aluno
	{
		printf("Numero do Livro: %d", numerolivro);
		printf("\nTipo de Usuario: Aluno");
		printf("\nTotal de Dias: 3");
	}
	
	//O \n (contrabarra e N) serve para quebra de linha
	
	return 0;
}
