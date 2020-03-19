#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float altura, peso, IMC;
	
	//Inicializa��o de vari�veis para evitar lixo de mem�ria
	altura = 0;
	peso = 0;
	IMC = 0;
	
	//Titulo do programa
	printf("===== Calculo de IMC ===== \n\n");
	
	//Lembrar que valores float devem ser informados com PONTO e n�o V�RGULA
	printf("Informe o peso da pessoa (use PONTO para valores decimais): ");
	scanf("%f", &peso);
	
	printf("Informe a altura da pessoa (use PONTO para valores decimais): ");
	scanf("%f", &altura);
	
	//Calculando o IMC conforme a f�rmula do exerc�cio, usando math.h para a fun��o de pow (potencia��o)
	IMC = peso / pow(altura, 2);
	
	if(IMC < 18.5)
	{
		printf("Pessoa esta abaixo do peso!");
	}
	else if(IMC >= 18.5 && IMC < 25)
	{
		printf("Pessoa esta no peso normal!");
	}
	else if(IMC >= 25 && IMC < 30)
	{
		printf("Pessoa esta acima do peso!");
	}
	else
	{	
		printf("Pessoa esta obesa!");
	}
	
	return 0;
}
