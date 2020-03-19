#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float  Nota1, Nota2, Nota3, Nota4, Soma, Media;	
	
	Soma = 0;  
	Media = 0; 
	
	printf("Digite a primeira nota: ");
	scanf("%f",&Nota1); 
	printf("Digite a segunda nota: ");
	scanf("%f",&Nota2);
	printf("Digite a terceira nota: ");
	scanf("%f",&Nota3);
	printf("Digite a quarta nota: ");
	scanf("%f",&Nota4);
	Soma = Nota1+Nota2+Nota3+Nota4;
	Media = Soma / 4;
	printf("Sua media e: %.2f\n",Media);
	system ("pause");
	return 0;
}
