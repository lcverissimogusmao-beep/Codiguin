#include <iostream>
using namespace std;

int main() {
    int m[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int dp = 0, ds = 0;
    for (int i = 0; i < 3; i++) {
        dp += m[i][i];
        ds += m[i][2 - i];
    }

    cout << "Soma diagonal principal: " << dp << endl;
    cout << "Soma diagonal secundaria: " << ds << endl;
    return 0;
}
