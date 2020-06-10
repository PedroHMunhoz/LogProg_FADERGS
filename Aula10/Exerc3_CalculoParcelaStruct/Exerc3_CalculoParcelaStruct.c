#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	struct regImovel {
		char tipoImovel[50];
		float valorImovel, valorEntrada, valorParcelas;
		int nroParcelas;
	};
	struct regImovel imovel;
	
	printf("========== Calculo de Parcelas Com Struct ==========\n\n");
	
	printf("Digite o tipo do imovel (Apartamento, Casa): ");
	gets(imovel.tipoImovel);
	
	printf("Digite o valor do imovel: ");
	scanf("%f", &imovel.valorImovel);
	
	printf("Digite o valor da entrada: ");
	scanf("%f", &imovel.valorEntrada);

   	printf("Digite o numero de parcelas: ");
	scanf("%d", &imovel.nroParcelas);
	
	imovel.valorParcelas = (imovel.valorImovel - imovel.valorEntrada) / imovel.nroParcelas;	

	printf("\n\n========== Impressao dos Resultados =========\n\n");
	
	printf("Tipo de Imovel: %s\n", imovel.tipoImovel);
	printf("Valor do Imovel: %.2f\n", imovel.valorImovel);
	printf("Valor da Entrada: %.2f\n", imovel.valorEntrada);
	printf("Valor das parcelas: %.2f\n", imovel.valorParcelas);
	
	return 0;
}
