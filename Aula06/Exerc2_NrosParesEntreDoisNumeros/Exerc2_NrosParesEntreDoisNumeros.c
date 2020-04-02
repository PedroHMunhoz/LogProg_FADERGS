#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero1, numero2;
	
	//Inicialização de variáveis para evitar lixo
	numero1 = 0;
	numero2 = 1;	
	
	//Título do Programa
	printf("===== Imprimir numeros pares entre 2 numeros pares ===== \n\n");	
	
	//Leitura dos dados
	printf("Digite o primeiro numero PAR: ");
	scanf("%d", &numero1);
	printf("Digite o segundo numero PAR (sendo maior que o primeiro digitado): ");
	scanf("%d", &numero2);
	
	//Incrementa o numero1 em 2, para mostrar o primeiro numero par ao entrar no loop
	numero1 = numero1 + 2;
	
	while(numero1 < numero2)
	{			
		//Imprime o valor salvo na variavel numero1
		printf("%d - ", numero1);
		
		//Incrementa em 2 o numero, para mostrar o próximo par
		numero1 = numero1 + 2;
	}
	
	return 0;
}
