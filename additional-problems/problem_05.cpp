#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, m, q, w, e, r;
    cin >> n >> m;
    float a[n][m];
    float result[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cin >> q >> w >> e >> r;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            float zbir = a[i][j];
            int chlenovi = 1;
            if (i >= q && i <= e && j >= w && j <= r) {
                if (i - 1 >= 0) {
                    zbir += a[i - 1][j];
                    chlenovi++;
                }
                if (i + 1 < n) {
                    zbir += a[i + 1][j];
                    chlenovi++;
                }
                if (j - 1 >= 0) {
                    zbir += a[i][j - 1];
                    chlenovi++;
                }
                if (j + 1 < m) {
                    zbir += a[i][j + 1];
                    chlenovi++;
                }
                if (i - 1 >= 0 && j - 1 >= 0) {
                    zbir += a[i - 1][j - 1];
                    chlenovi++;
                }
                if (i + 1 < n && j - 1 >= 0) {
                    zbir += a[i + 1][j - 1];
                    chlenovi++;
                }
                if (i - 1 >= 0 && j + 1 < m) {
                    zbir += a[i - 1][j + 1];
                    chlenovi++;
                }
                if (i + 1 < n && j + 1 < m) {
                    zbir += a[i + 1][j + 1];
                    chlenovi++;
                }
                result[i][j] = zbir / (float)chlenovi;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i >= q && i <= e && j >= w && j <= r) {
                a[i][j] = result[i][j];
            }
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
