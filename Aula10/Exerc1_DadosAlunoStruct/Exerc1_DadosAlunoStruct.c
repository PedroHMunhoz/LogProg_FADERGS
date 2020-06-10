#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	struct regAluno {
		char nomeAluno[100], nomeDisciplina[100];
		float nota1, nota2;
	};
	struct regAluno aluno;
	
	printf("========== Leitura de Dados de Aluno Com Struct ==========\n\n");
	
	printf("Digite o nome do aluno: ");
	gets(aluno.nomeAluno);
	
	printf("Digite o nome da disciplina: ");
	gets(aluno.nomeDisciplina);

   	printf("Digite a primeira nota: ");
	scanf("%f", &aluno.nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &aluno.nota2);
	
	printf("\n\n========== Impressao dos Resultados =========\n\n");
	
	printf("Nome do Aluno: %s\n", aluno.nomeAluno);
	printf("Disciplina: %s\n", aluno.nomeDisciplina);
	printf("Primeira Nota: %.2f\n", aluno.nota1);
	printf("Segunda Nota: %.2f\n", aluno.nota2);
	
	return 0;
}
