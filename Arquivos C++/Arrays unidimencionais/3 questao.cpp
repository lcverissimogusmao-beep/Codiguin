#include <iostream>
using namespace std;

int main() {
    float v[8], soma = 0;
    cout << "Digite 8 numeros reais:\n";
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
        soma += v[i];
    }
    cout << "Media aritmetica: " << soma / 8 << endl;
    return 0;
}
