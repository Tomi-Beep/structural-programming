#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int suma1 = 0, suma2 = 0;
    if (m % 2 == 0) {
        for (int i = 0; i < n; i++) {
            suma1 = 0;
            suma2 = 0;
            for (int j = 0; j < m; j++) {
                if (j < m / 2) {
                    suma1 += a[i][j];
                } else if (j >= m / 2) {
                    suma2 += a[i][j];
                }
            }
            a[i][m / 2] = abs(suma1 - suma2);
            a[i][m / 2 - 1] = abs(suma1 - suma2);
        }
    } else {
        for (int i = 0; i < n; i++) {
            suma1 = 0;
            suma2 = 0;
            for (int j = 0; j < m; j++) {
                if (j < m / 2) {
                    suma1 += a[i][j];
                } else if (j > m / 2) {
                    suma2 += a[i][j];
                } else {
                    suma1 += a[i][j];
                    suma2 += a[i][j];
                }
            }
            a[i][m / 2] = abs(suma1 - suma2);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
