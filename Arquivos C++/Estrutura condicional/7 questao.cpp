#include <iostream>
using namespace std;

int main() {
    double t1, t2, t3;
    if (!(cin >> t1 >> t2 >> t3)) return 0;
    double maior = t1;
    if (t2 > maior) maior = t2;
    if (t3 > maior) maior = t3;
    cout << maior << endl;
    return 0;
}