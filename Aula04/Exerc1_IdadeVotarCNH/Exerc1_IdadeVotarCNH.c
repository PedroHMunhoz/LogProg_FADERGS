#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int anoAtual, anoNascimento, idade;
	
	//Inicialização de variáveis para evitar lixo
	anoAtual = 2020;
	anoNascimento = 0;
	idade = 0;
	
	printf("===== Verificar se a pessoa pode votar e/ou tirar CNH ===== \n\n");
	
	printf("Informe o ano de nascimento da pessoa: ");
	scanf("%d", &anoNascimento);
	
	idade = anoAtual - anoNascimento;
	
	if(idade >= 18)
	{
		printf("A pessoa ja pode votar e tirar CNH!");
	}
	else 
	{
		if(idade >= 16)
		{
			printf("A pessoa ja pode votar, mas nao tirar CNH!");
		}
		else 
		{
			printf("A pessoa nao pode votar nem tirar CNH!");
		}
	}	
	return 0;
}
