#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1, n2;
    if (!(cin >> n1 >> n2)) return 0;
    double final = (n1 + n2) / 2.0;
    cout << fixed << setprecision(1);
    cout << "NOTA FINAL = " << final << endl;
    if (final < 60.0) cout << "REPROVADO" << endl;
    else cout << "APROVADO" << endl;
return 0;
}