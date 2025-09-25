#include <stdio.h>

int main() {
    double nota1, nota2, nota_final;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    nota_final = nota1 + nota2;

    printf("NOTA FINAL = %.1lf\n", nota_final);

    if (nota_final < 60.0) {
        printf("REPROVADO\n");    
    }
    return 0;
}