#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco_unitario, valor_dado;
    int quantidade;
    if (!(cin >> preco_unitario >> quantidade >> valor_dado)) return 0;
    double total = preco_unitario * quantidade;
    cout << fixed << setprecision(2);
    if (valor_dado >= total) {
        cout << "TROCO = " << (valor_dado - total) << endl;
    } else {
        cout << "FALTAM = " << (total - valor_dado) << endl;
    }
    return 0;
}