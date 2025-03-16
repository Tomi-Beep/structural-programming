#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    float zbir1 = 0, zbir2 = 0;
    cin >> n;
    float a[n][n], b[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                zbir1 += a[i][j];
            }
            if ((i + j) >= n) {
                zbir2 += a[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                b[i][j] = zbir1;
            } else if (i == n - 1 - j) {
                b[i][j] = zbir2;
            } else
                b[i][j] = 0;
            if (i == j && i == n - 1 - j) {
                b[i][j] = zbir1 + zbir2;
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
