#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero1, numero2, aux;
	
	//Inicialização de variáveis para evitar lixo de memória
	numero1 = 0;
	numero2 = 0;
	aux = 0;	
	
	printf("===== Trocar valor de A para B e vice versa ===== \n\n");
	
	printf("Digite o valor de A: ");
	scanf("%d", &numero1);
	printf("Digite o valor de B: ");
	scanf("%d", &numero2);
	
	aux = numero1; //Salva o numero1 na variavel aux
	numero1 = numero2;	 //Salva o numero2 na variavel numero1, trocando pela mesma	
	
	printf("\nValor trocado de A e %d.\n", numero1);
	printf("Valor trocado de B e %d.\n", aux);
	
	return 0;
}
