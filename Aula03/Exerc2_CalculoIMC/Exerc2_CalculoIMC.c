#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float altura, massa, imc;
	
	//Inicializa��o de vari�veis para evitar lixo de mem�ria
	altura = 0;
	massa = 0;
	imc = 0;
	
	printf("===== Calculadora de IMC ===== \n\n");
	printf("Digite a Massa: ");
	scanf("%f", &massa);
	printf("Digite a Altura: ");
	scanf("%f", &altura);	
	imc = massa / (altura*altura);
	printf("O valor do IMC para os dados digitados e %.2f", imc);	
	return 0;
}
