#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int segundos;
    if (!(cin >> segundos)) return 0;
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int seg = segundos % 60;
    cout << horas << ":" << minutos << ":" << seg << endl;
    return 0;
}