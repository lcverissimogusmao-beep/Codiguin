#include <stdio.h>

int main() {
    int vetor[15], maior, menor;

    printf("Digite 15 numeros inteiros:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = menor = vetor[0];

    for (int i = 1; i < 15; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("MAIOR = %d\n", maior);
    printf("MENOR = %d\n", menor);

    return 0;
}