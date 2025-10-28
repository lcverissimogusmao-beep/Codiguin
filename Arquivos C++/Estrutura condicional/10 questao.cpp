#include <iostream>
using namespace std;

int main() {
    int a,b;
    if (!(cin >> a >> b)) return 0;
    if (a % b == 0 || b % a == 0) cout << "Sao multiplos" << endl;
    else cout << "Nao sao multiplos" << endl;
    return 0;
}