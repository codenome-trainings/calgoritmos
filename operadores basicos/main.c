#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;

	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);

	printf("%d e a soma\n", a+b);
	printf("%d e a subtracao\n", a-b);
	printf("%d e a multiplicacao\n", a*b);
	printf("%d e a divisao\n", a/b);
}