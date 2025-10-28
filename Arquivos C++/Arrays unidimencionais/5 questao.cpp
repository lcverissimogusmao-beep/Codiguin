#include <iostream>
using namespace std;

int main() {
    int v[10], x;
    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++)
        cin >> v[i];

    cout << "Digite o numero a procurar: ";
    cin >> x;

    bool encontrado = false;
    for (int i = 0; i < 10; i++)
        if (v[i] == x)
            encontrado = true;

    if (encontrado)
        cout << "Numero encontrado no vetor." << endl;
    else
        cout << "Numero NAO encontrado." << endl;

    return 0;
}
