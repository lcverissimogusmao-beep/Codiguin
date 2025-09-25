#include <stdio.h>

int main() {
    double vetor[8], soma = 0.0, media;

    printf("Digite 8 numeros reais:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%lf", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 8.0;

    printf("MEDIA = %.2lf\n", media);

    return 0;
}