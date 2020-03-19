#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float tempoGasto, velocidadeMedia, distancia, litros;
	
	//Inicialização de variáveis para evitar lixo de memória
	tempoGasto = 0;
	velocidadeMedia = 0;
	distancia = 0;
	litros = 0; 
	
	printf("===== Calculo de Gasto de Combustivel Medio ===== \n\n");
	
	printf("Digite o tempo gasto na viagem (em horas): ");
	scanf("%f", &tempoGasto);
	printf("Digite a velocidade media da viagem: ");
	scanf("%f", &velocidadeMedia);	
	
	distancia = tempoGasto * velocidadeMedia;
	litros = distancia / 12;	
	printf("O veiculo gastou %.2f litros de gasolina.", litros);;
	
	return 0;
}
