#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	
	//Inicialização de variáveis para evitar lixo de memória
	numero = 0;
	
	printf("===== Antecessor e Sucessor do Numero ===== \n\n");
	
	printf("Digite o numero do qual deseja saber o Antecessor e Sucessor: ");
	scanf("%d", &numero);	
		
	printf("O antecessor de %d e %d.\n", numero, numero - 1);
	printf("O sucessor de %d e %d.\n", numero, numero + 1);
	
	return 0;
}
