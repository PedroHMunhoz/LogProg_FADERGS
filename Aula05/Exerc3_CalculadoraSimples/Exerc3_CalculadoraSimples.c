#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero1, numero2, operacao, resultado;
	
	//Inicialização de variáveis para evitar lixo
	numero1 = 0;
	numero2 = 0;
	operacao = 0;
	resultado = 0;
	
	printf("===== Calculadora Simples de Numeros Inteiros ===== \n\n");
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &numero1);
	printf("Informe o segundo numero: ");
	scanf("%d", &numero2);
	
	printf("Informe a operacao (1-Adicao | 2-Subtracao | 3-Multiplicacao | 4-Divisao): ");
	scanf("%d", &operacao);
	
	switch(operacao)
	{
		case 1:
			resultado = numero1 + numero2;
			break;
		case 2:
			resultado = numero1 - numero2;
			break;
		case 3:
			resultado = numero1 * numero2;
			break;
		case 4:
			resultado = numero1 / numero2;
			break;
		default:
			printf("Operacao invalida!");
			return 0;
			break;		
	}
	
	printf("O resultado e: %d", resultado);
	
	return 0;
}
