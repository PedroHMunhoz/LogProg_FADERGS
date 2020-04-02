#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero1, numero2, soma, contador;
	float media;
	
	//Inicialização de variáveis para evitar lixo
	numero1 = 0;
	numero2 = 1;
	soma = 0;
	contador = 0;
	media = 0;
	
	//Título do Programa
	printf("===== Imprimir media aritmetica de numeros pares entre 2 numeros pares ===== \n\n");
	
	//Leitura dos dados
	printf("Digite o primeiro numero PAR: ");
	scanf("%d", &numero1);
	printf("Digite o segundo numero PAR (sendo maior que o primeiro digitado): ");
	scanf("%d", &numero2);
	
	//Incrementa o numero1 em 2, para entrar no loop com o primeiro numero par do intervalo
	//Ou seja, se numero1 for 2, o primeiro numero par do intervalo deverá ser 4
	numero1 = numero1 + 2;
	
	//Enquanto o numero1 for menor que numero2, faça o loop
	while(numero1 < numero2)
	{
		//Aqui soma-se na variavel soma o resultado que ela ja tenha + numero1
		//No primeiro laço, o valor de numero1 é o primeiro numero par		
		soma = soma + numero1;
		
		//Depois, ele vai sendo incrementado de 2 em 2, sendo assim, na próxima passada do loop
		//o sistema ira somar o total já registrado com o próximo número par do intervalo
		numero1 = numero1 + 2;	
		
		//Aqui, faço um contador pois precisamos saber quantas vezes passou pelo loop
		//pois para calcular a Media Aritmetica precisamos dividir o total/quantidade de registros
		contador++;
	}	
	
	//Imprime o resultado da soma
	printf("Soma do valores pares entre os dois numeros e: %d\n", soma);
	
	//Calcula a media, fazendo o total somado dividido pela quantidade de vezes que passou no loop
	media = soma / contador;
	
	//Imprime o resultado da media aritmética
	printf("A media aritmetica (%d/%d) e: %.2f\n", soma, contador, media);
	
	return 0;
}
