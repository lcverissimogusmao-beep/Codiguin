#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int minutos;
    if (!(cin >> minutos)) return 0;
    double base = 50.0;
    if (minutos <= 100) {
        cout << fixed << setprecision(2) << base << endl;
    } else {
        double custo = base + (minutos - 100) * 2.0;
        cout << fixed << setprecision(2) << custo << endl;
    }
    return 0;
}