#include <stdio.h>

int main() {
    int vetor[10], numero, encontrado = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero que deseja buscar:\n");
    scanf("%d", &numero);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("O numero %d esta presente no vetor.\n", numero);
    } else {
        printf("O numero %d NAO esta presente no vetor.\n", numero);
    }

    return 0;
}