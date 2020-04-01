#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	
	//Inicialização de variáveis para evitar lixo
	numero = 0;
	
	printf("===== Verificar se numero e positivo, negativo ou nulo ===== \n\n");
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	if(numero > 0)
	{
		printf("O numero %d e positivo!", numero);
	}
	else if(numero < 0)
	{
		printf("O numero %d e negativo!", numero);
	}
	else
	{
		printf("O numero e nulo!");
	}
	
	
	return 0;
}
