#include <stdio.h>

int main() {
    int v1[5], v2[5], v3[10];

    printf("Digite 5 numeros para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite 5 numeros para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v2[i]);
    }

    for (int i = 0, j = 0; i < 5; i++) {
        v3[j++] = v1[i];
        v3[j++] = v2[i];
    }

    printf("Vetor intercalado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}