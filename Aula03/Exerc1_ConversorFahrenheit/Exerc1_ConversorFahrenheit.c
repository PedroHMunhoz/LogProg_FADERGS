#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float grausCelsius, grausFahrenheit;
	
	//Inicializa��o de vari�veis para evitar lixo de mem�ria
	grausCelsius = 0;
	grausFahrenheit = 0;
	
	printf("===== Conversor de Graus Celsius para Fahrenheit ===== \n\n");
	
	printf("Digite o valor de Graus em Celsius: ");
	scanf("%f", &grausCelsius);	
	grausFahrenheit = grausCelsius * 1.8 + 32;
	printf("\nA temparatura %.2f Celsius e %.2f Farenheit", grausCelsius, grausFahrenheit);
	return 0;
}

