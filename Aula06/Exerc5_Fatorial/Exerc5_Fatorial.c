#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero, resultado;
	
	//Inicializa��o de vari�veis para evitar lixo
	numero = 0;	
	resultado = 1;
	
	printf("===== Fatorial de um numero ===== \n\n");
	
	//Solicita ao usu�rio o numero do qual ser� gerado fatorial
	printf("Digite o numero para calcular seu fatorial: ");
	scanf("%d", &numero);
	
	//Enquanto o numero for diferente de 1
	//Pois fatorial de 1 � 1
	while(numero != 1)
	{		
		//Aqui � feito a regra de Resultado * numero, ou seja, supondo que o numero seja 5
		//no primeiro la�o seria 1*5
		resultado = resultado * numero;
		
		//Decrementa o numero, sendo ele 5, agora ele passar� a ser 4
		//Na pr�xima passada, ele far� resultado (que vale 5) * numero (que vale 4) dando 20
		//E assim por diante
		numero = numero - 1;				
	}
	
	printf("O fatorial de %d e %d", numero, resultado);
	
	
	
	
	return 0;
}
