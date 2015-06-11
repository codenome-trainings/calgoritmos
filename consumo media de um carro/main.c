/*Escrever um algoritmo para determinar o
consumo médio de um automóvel sendo fornecida a distância total 
percorrida pelo automóvel e o total de combustível gasto.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	float distancia, combustivel, consumo;

	printf("Digite a distancia percorrida: ");
	scanf("%f", &distancia);

	printf("Digite o total de combustivel gasto: ");
	scanf("%f", &combustivel);

	consumo = distancia / combustivel;

	printf("%f e o consumo medio.", consumo);
}