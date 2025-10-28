#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco_unitario, dinheiro, troco;
    int quantidade;

    cout << "Preço unitário do produto: ";
    cin >> preco_unitario;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    troco = dinheiro - (preco_unitario * quantidade);

    cout << fixed << setprecision(2);
    cout << "Troco = R$ " << troco << endl;

    return 0;
}