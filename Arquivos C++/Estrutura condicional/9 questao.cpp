#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigo, quantidade;
    if (!(cin >> codigo >> quantidade)) return 0;
    double preco = 0;
    switch(codigo) {
        case 1: preco = 5.00; break;
        case 2: preco = 3.50; break;
        case 3: preco = 4.80; break;
        case 4: preco = 8.90; break;
        case 5: preco = 7.32; break;
        default: preco = 0; break;
    }
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << preco * quantidade << endl;
    return 0;
}