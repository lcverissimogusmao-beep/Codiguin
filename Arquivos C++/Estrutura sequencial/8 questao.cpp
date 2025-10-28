#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distancia, combustivel;
    if (!(cin >> distancia >> combustivel)) return 0;
    double consumo_medio = distancia / combustivel;
    cout << fixed << setprecision(3);
    cout << consumo_medio << " km/l" << endl;
    return 0;
}