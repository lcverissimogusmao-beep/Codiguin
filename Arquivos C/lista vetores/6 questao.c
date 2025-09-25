#include <stdio.h>

int main() {
    int n, fatorial = 1;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("Fatorial de %d = %d\n", n, fatorial);
    }

    return 0;
}