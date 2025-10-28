#include <iostream>
using namespace std;

int main() {
    int matriz[4][4] = {
        {3, 5, 9, 1},
        {7, 2, 8, 6},
        {4, 10, 0, 12},
        {15, 11, 13, 14}
    };

    int maior = matriz[0][0];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matriz[i][j] > maior)
                maior = matriz[i][j];

    cout << "Maior elemento: " << maior;
    return 0;
}
