#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, zbir1 = 0, zbir2 = 0;
    cin >> n;
    int a[n][n], b[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        zbir1 = 0, zbir2 = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                for (int k = j + 1; k < n; k++) {
                    zbir1 += a[i][k];
                }
                for (int k = i - 1; k >= 0; k--) {
                    zbir1 += a[k][i];
                }
                b[i][i] = zbir1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        zbir1 = 0, zbir2 = 0;
        for (int j = 0; j < n; j++) {
            if (i == n - 1 - j) {
                for (int k = j - 1; k >= 0; k--) {
                    zbir2 += a[i][k];
                }
                for (int k = i + 1; k < n; k++) {
                    zbir2 += a[k][j];
                }
                if (i == j)
                    b[i][j] += zbir2;
                else
                    b[i][j] = zbir2;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
