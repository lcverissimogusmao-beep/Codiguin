#include <stdio.h>

int main() {
    double preco, dinheiro, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    double total = preco * quantidade;

    if (dinheiro >= total) {
        troco = dinheiro - total;
        printf("TROCO = %.2lf\n", troco);
    } else {
        double faltante = total - dinheiro;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", faltante);
    }

    return 0;
}