#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float largura, comprimento, valor_m2, area, preco;

    cout << "Digite a largura do terreno (m): ";
    cin >> largura;

    cout << "Digite o comprimento do terreno (m): ";
    cin >> comprimento;

    cout << "Digite o valor do metro quadrado (R$): ";
    cin >> valor_m2;

    area = largura * comprimento;
    preco = area * valor_m2;

    cout << fixed << setprecision(2);
    cout << "Área do terreno: " << area << " m²" << endl;
    cout << "Preço do terreno: R$ " << preco << endl;

    return 0;
}