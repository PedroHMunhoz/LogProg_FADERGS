#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float base, altura, area;
	
	//Inicializa as variáveis para evitar lixo de memória
	base = 0;
	altura = 0;
	area = 0;
	
	printf("===== Calculadora de Area de um triangulo ===== \n\n");
	printf("Digite a base do triangulo: ");
	scanf("%f", &base);
	printf("Digite a altura do triangulo: ");
	scanf("%f", &altura);
	area = (base*altura) / 2;
	printf("A area do triangulo e: %.2f", area);	
	return 0;
}

