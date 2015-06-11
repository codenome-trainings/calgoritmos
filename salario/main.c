#include <stdio.h>
#include <stdlib.h>

int main() {

	char nome[15];
	float salario;
	float vendas, comissao;

	printf("Digite o nome do vendedor: ");
	scanf("%s", &nome);

	printf("Digite o salario: ");
	scanf("%f", &salario);

	printf("Digite o total de vendas deste mes: ");
	scanf("%f", &vendas);

	comissao = ((vendas*15) / 100);

	printf("Nome do vendedor: %s\n", nome);
	printf("Salario: %f\n", salario);
	printf("Total das vendas: %f\n", vendas);
	printf("Total a receber: %f\n", comissao);

}