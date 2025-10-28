#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double glicose;
    if (!(cin >> glicose)) return 0;
    if (glicose <= 100) cout << "Normal" << endl;
    else if (glicose <= 140) cout << "Elevado" << endl;
    else cout << "Diabetes" << endl;
    return 0;
}