#include <iostream>
using namespace std;

int main() {
    int v[10], inverso[10];
    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++)
        cin >> v[i];

    for (int i = 0; i < 10; i++)
        inverso[i] = v[9 - i];

    cout << "Vetor invertido: ";
    for (int i = 0; i < 10; i++)
        cout << inverso[i] << " ";
    cout << endl;
    return 0;
}
