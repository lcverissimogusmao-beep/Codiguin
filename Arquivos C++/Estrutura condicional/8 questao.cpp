#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temp;
    if (!(cin >> escala >> temp)) return 0;
    cout << fixed << setprecision(2);
    if (escala == 'C' || escala == 'c') {
        double f = (temp * 9.0 / 5.0) + 32.0;
        cout << f << " F" << endl;
    } else if (escala == 'F' || escala == 'f') {
        double c = (5.0/9.0) * (temp - 32.0);
        cout << c << " C" << endl;
    }
    return 0;
}