#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, x1, x2, delta;
	
	//Inicializando as varíaveis, para evitar lixo
	a = 0;
	b = 0;
	c = 0;
	x1 = 0;
	x2 = 0;
	delta = 0;
	
	printf("===== Calculo de Bhaskara -> Ax^2 + Bx + C ===== \n\n");
	
	printf("Informe o valor de A: ");
	scanf("%f", &a);
	printf("Informe o valor de B: ");
	scanf("%f", &b);
	printf("Informe o valor de C: ");
	scanf("%f", &c);
	
	delta = pow(b, 2) - 4 * a * c;
	
	if(delta < 0){
		printf("Nao existem raizes reais!");		
	}
	else
	{
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
		
		printf("Os valores de X1 e X2 sao, respectivamente: %.2f e %.2f.", x1, x2);
	}	
	
	return 0;
}
