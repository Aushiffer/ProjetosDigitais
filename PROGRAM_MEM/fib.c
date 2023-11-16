#include <stdio.h>

int main() {
	int fib1 = 0;
	int fib2 = 1;
	int fib3;
	int n;
	printf("Escreva quantos números da seq. de Fibonacci você quer mostrar (após 0 e 1): ");
	scanf("%d", &n);
	printf("%d %d ", fib1, fib2);
	for (int i = 0; i < n; i++) {
		fib3 = fib1 + fib2;
		printf("%d ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");

	return 0;
}
