#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float vlrHoraTecnica, nroHorasTrabalhadasMes, percDescontoINSS;
	float salarioBruto, salarioLiquido;
	
	//Inicialização de variáveis para evitar lixo de memória
	vlrHoraTecnica = 0;
	nroHorasTrabalhadasMes = 0;
	percDescontoINSS = 0;
	salarioBruto = 0;
	salarioLiquido = 0;
	
	printf("===== Calculadora de Salario Liquido ===== \n\n");
	
	printf("Digite o valor da hora tecnica: ");
	scanf("%f", &vlrHoraTecnica);
	printf("Digite o numero de horas trabalhadas no mes: ");
	scanf("%f", &nroHorasTrabalhadasMes);
	printf("Digite o percentual de desconto do INSS: ");
	scanf("%f", &percDescontoINSS);
		
	salarioBruto = vlrHoraTecnica * nroHorasTrabalhadasMes;
	salarioLiquido =  salarioBruto - (salarioBruto * (percDescontoINSS / 100));	
	printf("O valor do salario liquido e: %.2f", salarioLiquido);
	
	return 0;
}
