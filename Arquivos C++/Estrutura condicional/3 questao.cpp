#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    if (!(cin >> a >> b >> c)) return 0;
    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    cout << menor << endl;
    return 0;
}