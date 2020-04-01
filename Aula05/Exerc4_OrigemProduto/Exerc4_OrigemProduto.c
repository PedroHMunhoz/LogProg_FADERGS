#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	int codigoorigem;
	float precoproduto;
	
	//Inicialização de variáveis para evitar lixo
	codigoorigem = 0;
	precoproduto = 0;
	
	printf("===== Origem e Preco do Produto ===== \n\n");
	
	printf("Informe o preco do produto: ");
	scanf("%f", &precoproduto);
	printf("Informe o codigo de origem do produto (1-Sul | 2-Norte | 3-Leste | 4-Oeste): ");
	scanf("%d", &codigoorigem);;
	
	switch(codigoorigem)
	{
		case 1:
			printf("O produto e do Sul e seu preco e R$%.2f!", precoproduto);
			break;
		case 2:
			printf("O produto e do Norte e seu preco e R$%.2f!", precoproduto);
			break;
		case 3:
			printf("O produto e do Leste e seu preco e R$%.2f!", precoproduto);
			break;
		case 4:
			printf("O produto e do Oeste e seu preco e R$%.2f!", precoproduto);
			break;
		default:
			printf("O produto e Importado e seu preco e R$%.2f!", precoproduto);			
			break;		
	}
	return 0;
}
