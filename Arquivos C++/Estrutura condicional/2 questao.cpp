#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a,b,c;
    if (!(cin >> a >> b >> c)) return 0;
    double delta = b*b - 4*a*c;
    cout << fixed << setprecision(4);
    if (delta < 0 || a == 0) {
        cout << "NAO HA RAIZES REAIS" << endl;
    } else {
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
    return 0;
}
