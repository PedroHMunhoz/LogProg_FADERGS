#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	float p1, t1, p2, t2, g1, g2, mf;
	
	//Inicialização de variáveis
	g1 = 0;
	mf = 0;
	
	printf("Informe a nota da Prova 1 (peso 5): ");
	scanf("%f", &p1);
	printf("Informe a nota do Trabalho 1 (peso 5): ");
	scanf("%f", &t1);
	printf("Informe a nota da Prova 2 (peso 5): ");
	scanf("%f", &p2);
	printf("Informe a nota do Trabalho 2 (peso 5): ");
	scanf("%f", &t2);
	
	g1 = (p1 + t1 + p2+ t2)/4;
	
	printf("\nVoce ficou na G1 com %.2f \n\n", g1);
	if(g1 >= 7)
	{
		printf("Aprovado!");
	}
	else
	{
		printf("Voce ficou em G2!\n");
		printf("Voce necessita tirar %.2f ", (12-g1)/2);
		printf("\nInforme a nota da G2 (peso 10): ");
		scanf("%f", &g2);
		mf = (g1 + g2)/2;
		
		if(mf >= 6)
		{
			printf("Voce esta aprovado!");
		}
		else
		{
			printf("Voce esta reprovado!");
		}		
	}
	
	return 0;
}
