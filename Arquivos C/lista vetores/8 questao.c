#include <stdio.h>

int main() {
    int n, a = 0, b = 1, prox;

    printf("Quantos elementos da sequencia de Fibonacci deseja mostrar?\n");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        prox = a + b;
        a = b;
        b = prox;
    }
    printf("\n");

    return 0;
}