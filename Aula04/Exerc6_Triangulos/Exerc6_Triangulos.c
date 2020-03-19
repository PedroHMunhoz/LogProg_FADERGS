#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float ladoA, ladoB, ladoC;
	
	//Inicialização de variáveis para evitar lixo de memória
	ladoA = 0;
	ladoB = 0;
	ladoC = 0;
	
	//Título do Programa
	printf("===== Verificar Tipo de Triangulo ===== \n\n");
	
	//Leitura dos valores pelo usuário
	printf("Informe o valor do lado A: ");
	scanf("%f", &ladoA);
	printf("Informe o valor do lado B: ");
	scanf("%f", &ladoB);
	printf("Informe o valor do lado C: ");
	scanf("%f", &ladoC);
	
	//Se algum lado for igual ou maior que a soma dos outros dois, ele não é um triângulo
	//Exemplo --> A = 7 | B = 5 | C= 2
	if(ladoA >= (ladoB + ladoC) || ladoB >= (ladoA + ladoC) || ladoC >= (ladoA + ladoB))
	{
		printf("Essa figura nao e um triangulo!");
	}
	else
	{
		//Se todos os lados forem iguais, é equilátero
		//Exemplo --> A = 5 | B = 5 | C = 5. Se A for igual a B e B igual C
		if(ladoA == ladoB && ladoB == ladoC){
			printf("Essa figura e triangulo equilatero!");
		}
		else
		{
			//Se dois lados forem iguais, é isosceles
			//Exemplo --> A = 5 | B = 5 | C = 3. Se A for igual a B e B diferente de C
			if(ladoA == ladoB && ladoB != ladoC)
			{
				printf("Essa figura e triangulo isosceles!");	
			}
			else //Se todos os lados forem diferentes, é escaleno
			{
				//Exemplo --> A = 2 | B = 6 | C = 10. Todos os lados são diferentes e a soma de dois deles é diferente entre eles
				printf("Essa figura e triangulo escaleno!");	
			}
		}
	}
	
	return 0;
}
