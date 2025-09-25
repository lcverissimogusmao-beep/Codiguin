#include <stdio.h>

double raiz_quadrada(double n) {
    double x = n;
    double y = 1.0;
    double e = 0.000001; // precisão

    if (n < 0) return -1; // não existe raiz real

    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    double a, b, c, delta, x1, x2;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (a == 0) {
        printf("Nao e equacao do segundo grau\n");
    } else if (delta < 0) {
        printf("Esta equacao nao possui raizes reais\n");
    } else {
        double raiz_delta = raiz_quadrada(delta);
        x1 = (-b + raiz_delta) / (2 * a);
        x2 = (-b - raiz_delta) / (2 * a);
        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }

    return 0;
}