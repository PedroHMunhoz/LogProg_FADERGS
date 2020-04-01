#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	int totalcalorias;	
	
	//Inicialização de variáveis para evitar lixo
	totalcalorias = 0;	
	
	printf("===== Montar Refeicao pelo Total de Calorias ===== \n\n");
	
	printf("Informe o total de calorias a consumir: ");
	scanf("%d", &totalcalorias);
	
	if(totalcalorias <= 275)
	{
		printf("Prato: Vegetariano - 180cal");
		printf("\nSobremesa: Abacaxi - 75cal");
		printf("\nBebida: Cha - 20cal");
	}
	else if(totalcalorias <= 410)	
	{
		printf("Prato: Peixe - 230cal");
		printf("\nSobremesa: Sorvete Diet - 110cal");
		printf("\nBebida: Suco de Laranja - 70cal");
	}
	else if(totalcalorias <= 520)
	{
		printf("Prato: Frango - 250cal");
		printf("\nSobremesa: Mousse diet - 170cal");
		printf("\nBebida: Suco de melao - 100cal");
	}
	else
	{
		printf("Prato: Carne - 350cal");
		printf("\nSobremesa: Mousse chocolate - 200cal");
		printf("\nBebida: Refiregerante diet - 65cal");
	}
	
	return 0;
}
