#include <stdio.h>  
  
int main()  
{  
	char cpf[12]; //Vetor de char onde será armazenado o valor digitado pelo usuário
	int icpf[12];  //Vetor de inteiros, onde será armazenado os valores digitados do CPF, porém convertidos pra inteiro, pra poder multiplicar
	int i, soma, resto1, digito1, resto2, digito2, valor; //Variáveis de apoio
	
	//Inicialização de variáveis para evitar lixo de memória
	soma = 0;
	resto1 = 0;
	resto2 = 0;
	digito1 = 0;
	digito2 = 0;
  	
  	//Titulo do programa
  	printf("========== VALIDADOR DE CPF EM LINGUAGEM C ==========\n\n");
  	
  	//Solicita a entrada do usuário
	printf("DIGITE O CPF A SER VALIDADO: ");  
	
	//Captura o que foi digitado, e atribui para a variável cpf, que é nosso array de char
	gets(cpf);  
	  
	//Efetua a conversao de array de char para um array de int.  
	for(i=0; i<11; i++)  
	{  
		icpf[i]=cpf[i]-48;  
		
		// Aqui verificamos se nenhum dos caracteres digitados é inválido, como uma letra, por exemplo
		// Se for, damos mensagem de valor inválido e saímos do programa
		if(icpf[i] < 0 || icpf[i] > 9)
		{
			printf("Valor invalido digitado!");
	   		return 0;
		}
	}  
	  
	//Calculando o primeiro digito
	/* Aqui fazemos a regra de multiplicar cada posição do vetor por 10 - i (que é nosso contador do loop),
	* dessa forma faremos o primeiro valor vezes 9, o segundo vezes 8...e assim por diante, até 2
	* e sempre somando o valor em uma variável auxiliar	soma
	*/
	for(i = 0; i < 9; i++)  
	{  
		soma+= icpf[i] * (10-i);  
	}  
	
	// Calcula o primeiro resto, fazendo a soma MOD 11
	resto1 = soma % 11;  
	  
	// Se por acaso o resto do MOD 11 for 0 ou 1, então o dígito deve ser 0
	if((resto1 == 0) || (resto1 == 1) )  
	{  
		digito1 = 0;  
	}	  
	else  //Caso contrário, o dígito será 11 menos o valor do resto
	{  
		digito1 = 11 - resto1;  
	}  
	  
	//Zeramos a nossa variável soma, para fazer a nova soma
	soma=0;
	
	//Calculando o segundo digito
	/* Aqui fazemos a regra de multiplicar cada posição do vetor por 11 - i, que é nosso contador do loop 
	* dessa forma faremos o primeiro caracter vezes 10, o segundo vezes 9...e assim por diante, até 3
	* e sempre somando o valor em uma variável auxiliar	soma
	*/
	for(i = 0; i < 10; i++)  
	{  
		soma += icpf[i] * (11-i);  
	}  
	
	// Calcula o segundo resto, fazendo a soma MOD 11
	resto2 = soma % 11;
	  
	// A regra aqui é a mesma do primeiro dígito, se o resto do MOD 11 for 0 ou 1, o dígito deve ser 0
	if((resto2 == 0) || (resto2 == 1) )  
	{  
		digito2 = 0;  
	}	  
	else  //Caso contrário, o dígito será 11 menos o valor do resto
	{  
		digito2 = 11 - resto2;  
	}  
	  
	// Fazendo a validação
	/* Aqui, vamos comparar o valor calculado do primeiro dígito com o décimo caracter do CPF digitado e 
	* o valor calculado do segundo dígito com o décimo primeiro caracter do CPF digitado. Se eles forem iguais,
	* significa que este número de CPF é válido, caso contrário, é inválido.
	*/
	if((digito1 == icpf[9]) && (digito2 == icpf[10]))  
	{  
		printf("O CPF digitado e valido!\n");  
	}  
	else  
	{  
		printf("O CPF digitado e invalido!\n");  
	}
	  
	return 0;  
}  
