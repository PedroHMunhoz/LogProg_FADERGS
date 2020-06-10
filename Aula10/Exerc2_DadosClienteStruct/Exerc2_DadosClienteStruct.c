#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	struct regCliente {
		char nomeCliente[100], cpfCliente[20], dataNascimentoCliente[10];		
	};
	struct regCliente cliente;
	
	printf("========== Leitura de Dados de Cliente Com Struct ==========\n\n");
	
	printf("Digite o nome do cliente: ");
	gets(cliente.nomeCliente);
	
	printf("Digite o CPF do cliente:  ");
	gets(cliente.cpfCliente);

   	printf("Digite a data de nascimento do cliente (usar DD/MM/AAAA): ");
	gets(cliente.dataNascimentoCliente);
	
	printf("\n\n========== Impressao dos Resultados =========\n\n");
	
	printf("Nome do Cliente: %s\n", cliente.nomeCliente);
	printf("CPF do Cliente: %s\n", cliente.cpfCliente);
	printf("Data de Nascimento: %s", cliente.dataNascimentoCliente);
	
	return 0;
}
