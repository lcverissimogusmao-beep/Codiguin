#include <iostream>
using namespace std;

int contarOcorrencias(int m[4][4], int num) {
    int cont = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (m[i][j] == num)
                cont++;
    return cont;
}

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 1, 6, 1},
        {7, 8, 9, 1},
        {1, 10, 11, 12}
    };
    int n;
    cout << "Digite o numero para buscar: ";
    cin >> n;
    cout << "O numero " << n << " aparece " << contarOcorrencias(matriz, n) << " vezes." << endl;
    return 0;
}
