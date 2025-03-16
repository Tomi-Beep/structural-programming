#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int x, n, m;
    cin >> x >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int zbir = 0;
        for (int j = 0; j < m; j++) {
            zbir += a[i][j];
        }
        if (zbir > x) {
            for (int j = 0; j < m; j++) {
                a[i][j] = 1;
            }
        } else if (zbir < x) {
            for (int j = 0; j < m; j++) {
                a[i][j] = -1;
            }
        } else {
            for (int j = 0; j < m; j++) {
                a[i][j] = 0;
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
