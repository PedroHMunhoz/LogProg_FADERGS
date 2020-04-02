#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int qtdAlunos, qtdAlunas, sexo, contador;
	float altura, somaAlturaAlunos, somaAlturaAlunas, mediaAlturaAlunos, mediaAlturaAlunas;
	
	//Inicializa��o de vari�veis para evitar lixo
	qtdAlunos = 0;
	qtdAlunas = 0;
	contador = 1;
	altura = 0;
	somaAlturaAlunos = 0;
	somaAlturaAlunas = 0;
	mediaAlturaAlunos = 0;
	mediaAlturaAlunas = 0;
	
	//T�tulo do Programa
	printf("===== Informacoes sobre alunos ===== \n\n");
	
	//Enquanto o contador for menor que 20, pois � preciso ler os dados de 20 alunos
	//Como o contador inicia com 1, deve ser menor ou igual a 20, ent�o ir� iterar entre 1 e 20
	while(contador <= 20)
	{
		//L� o sexo do aluno/aluna
		printf("Informe o sexo do aluno(a) (1 - Masculino | 2 - Feminino): ");
		scanf("%d", &sexo);
		
		//L� a altura do aluno/aluna
		printf("Informe a altura: ");
		scanf("%f", &altura);
		
		//Se for Masculino
		if(sexo == 1)	
		{
			//Soma na vari�vel o total de altura dos alunos do sexo masculino
			somaAlturaAlunos = somaAlturaAlunos + altura;
			
			//Incrementa o contador de Alunos do sexo masculino
			qtdAlunos++;
		}
		else //Se for Feminino
		{
			//Soma na vari�vel o total de altura dos alunos do sexo feminino
			somaAlturaAlunas = somaAlturaAlunas + altura;
			
			//Incrementa o contador de Alunos do sexo feminino
			qtdAlunas++;
		}				
		
		contador++;
	}
	
	//Calcula a m�dia de altura dos alunos do sexo Masculino	
	mediaAlturaAlunos = somaAlturaAlunos / qtdAlunos;
	
	//Calcula a m�dia de altura dos alunos do sexo Feminino
	mediaAlturaAlunas = somaAlturaAlunas / qtdAlunas;	
	
	//Imprime os resultados
	printf("Quantidade de Alunos: %d", qtdAlunos);
	printf("\nQuantidade de Alunas: %d", qtdAlunas);
	printf("\nMedia de altura dos Alunos: %.2f", mediaAlturaAlunos);
	printf("\nMedia de altura das Alunas: %.2f", mediaAlturaAlunas);
	
	return 0;
}
