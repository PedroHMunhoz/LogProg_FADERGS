#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero, contador;
	
	//Inicialização de variáveis para evitar lixo
	numero = 0;
	contador = 1;
	
	printf("===== Gerador de Tabuada ===== \n\n");
	
	//Pede para o usuário digitar o número a ser calculado a tabuada
	printf("Informe o numero que deseja ver a tabuada:");
	scanf("%d", &numero);
	
	//Enquanto o contador for menor ou igual à 10, pois a tabuada vai de 1 à 10
	while(contador<=10)
	{
		//Imprime o resultado da tabuada, para cada passada do loop
		printf("\n%d x %d = %d", numero, contador, numero * contador);
		
		//Incrementa o contador para poder controlar a condição de parada do loop
		contador = contador + 1;
	}
	
	return 0;
}
