#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite quantos termos da sequencia de Fibonacci deseja: ";
    cin >> n;

    int a = 0, b = 1, c;
    cout << "Sequencia de Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}
