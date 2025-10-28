#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float base, altura, area, perimetro, diagonal;

    cout << "Digite a base do retângulo: ";
    cin >> base;

    cout << "Digite a altura do retângulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);

    cout << fixed << setprecision(4);
    cout << "Área = " << area << endl;
    cout << "Perímetro = " << perimetro << endl;
    cout << "Diagonal = " << diagonal << endl;

    return 0;
}