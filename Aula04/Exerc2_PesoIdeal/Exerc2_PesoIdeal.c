#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sexo;
	float altura, pesoIdeal;
	
	//Inicialização de variáveis para evitar lixo de memória
	sexo = 0;
	altura = 0;
	pesoIdeal = 0;
	
	printf("===== Calculo de Peso Ideal por Sexo ===== \n\n");
	
	printf("Informe a altura da pessoa: ");
	scanf("%f", &altura);
	
	printf("Informe o Sexo da pessoa (1 - Masculino | 2 - Feminino): ");
	scanf("%d", &sexo);
	
	//Masculino
	if(sexo == 1)
	{
		pesoIdeal = 72.7 * altura - 58;	
	}
	else
	{
		pesoIdeal = 62.1 * altura - 44.7;	
	}
	
	printf("O peso ideal da pessoa e: %.2f", pesoIdeal);
	
	
	
	return 0;
}

