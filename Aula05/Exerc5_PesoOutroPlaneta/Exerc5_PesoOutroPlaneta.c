#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeroplaneta;
	float peso, pesooutroplaneta;
	
	//Inicialização de variáveis para evitar lixo
	numeroplaneta = 0;
	peso = 0;
	pesooutroplaneta = 0;
	
	printf("===== Peso em Outros Planetas ===== \n\n");
	
	printf("Informe o peso: ");
	scanf("%f", &peso);
	printf("Informe o numero do planeta (1-Mercurio | 2-Venus | 3-Marte | 4-Jupiter | 5-Saturno | 6-Urano): ");
	scanf("%d", &numeroplaneta);	
	
	switch(numeroplaneta)
	{
		case 1:
			pesooutroplaneta = peso * 0.37;
			printf("O seu peso em Mercurio e: %.2f", pesooutroplaneta);
			break;
		case 2:
			pesooutroplaneta = peso * 0.88;
			printf("O seu peso em Venus e: %.2f", pesooutroplaneta);
			break;
		case 3:
			pesooutroplaneta = peso * 0.38;
			printf("O seu peso em Marte e: %.2f", pesooutroplaneta);
			break;
		case 4:
			pesooutroplaneta = peso * 2.64;
			printf("O seu peso em Jupiter e: %.2f", pesooutroplaneta);
			break;
		case 5:
			pesooutroplaneta = peso * 1.15;
			printf("O seu peso em Saturno e: %.2f", pesooutroplaneta);
			break;
		case 6:
			pesooutroplaneta = peso * 1.17;
			printf("O seu peso em Urano e: %.2f", pesooutroplaneta);
			break;
		default:
			printf("Planeta invalido!");			
			break;		
	}
	
	
	return 0;
}
