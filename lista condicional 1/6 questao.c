#include <stdio.h>
int main() {
	float raio, pi = 3.14159, area;
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	area = pi * raio * raio;
	printf("area = %.3f\n", area);
	return 0;
}