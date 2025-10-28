#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A,B,C;
    if (!(cin >> A >> B >> C)) return 0;
    double area_quadrado = A * A;
    double area_triangulo = (A * B) / 2.0;
    double area_trapezio = ((A + B) * C) / 2.0;
    cout << fixed << setprecision(4);
    cout << "AREA_QUADRADO = " << area_quadrado << endl;
    cout << "AREA_TRIANGULO = " << area_triangulo << endl;
    cout << "AREA_TRAPEZIO = " << area_trapezio << endl;
    return 0;
}