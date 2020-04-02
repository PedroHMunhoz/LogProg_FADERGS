#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float peso, somatorio;
	int nropessoas;
	
	somatorio = 0;
	nropessoas = 1;
	
	printf("::::::Somatorio de Pesos::::::");
	
	while(nropessoas <= 5)
	{
		printf("\nInforme o peso: ");
		scanf("%f", &peso);
		somatorio = somatorio + peso;
		nropessoas = nropessoas + 1;	
	}
	
	printf("O somatorio do peso de 5 pessoas e: %.2f", somatorio);
	
	
	return 0;
}
