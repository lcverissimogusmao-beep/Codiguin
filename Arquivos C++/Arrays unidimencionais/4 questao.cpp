#include <iostream>
using namespace std;

int main() {
    int v[20], pares = 0, impares = 0;
    cout << "Digite 20 numeros inteiros:\n";
    for (int i = 0; i < 20; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0) pares++;
        else impares++;
    }
    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;
    return 0;
}
