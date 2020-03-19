#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	
	
	//Inicialização de variáveis para evitar lixo de memória
	a = 0;
	b = 0;
	c = 0;
	
	//Título do Programa
	printf("===== Ordenacao de Valores ===== \n\n");
	
	//Leitura de Valores digitados
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	printf("Digite o terceiro valor: ");
	scanf("%d", &c);
	
	//Se o A for maior que os outros dois
	if(a > b && a > c)
	{
		//Verifica se B é maior que C
		if(b > c)
		{ 
			printf("Numeros ordenados: %d %d %d", a, b, c);
		}
		else 
		{
			printf("Numeros ordenados: %d %d %d", a, c, b);
		}
	}
	else //Se A não for maior que B e C
	{
		//Se B for maior que os outros dois
		if(b > a && b > c)
		{	
			//Verifica se A é maior que C		
			if(a > c)
			{ 
				printf("Numeros ordenados: %d %d %d", b, a, c);
			}
			else
			{
				printf("Numeros ordenados: %d %d %d", b, c, a);
			}
		}
		else //Se B não for maior do que A e C
		{
			//Verifica se C é maior que A e C
			if(c > a && c > b)
			{
				//Verifica se A é maior do que B
				if(a > b)
				{
					printf("Numeros ordenados: %d %d %d", c, a, b);
				}
				else
				{
					printf("Numeros ordenados: %d %d %d", c, b, a);
				}
			}
		}
	}
	
	return 0;
}
