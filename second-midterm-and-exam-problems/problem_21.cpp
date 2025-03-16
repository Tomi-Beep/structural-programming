#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m], b[n * m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int x = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool t = true;
            for (int k = 0; k < m; k++) {
                if (k == j)
                    continue;
                if (a[i][j] == a[i][k]) {
                    t = false;
                    break;
                }
            }
            if (t) {
                b[x] = a[i][j];
                x++;
            }
        }
    }
    if (x > 0)
        for (int i = 0; i < x; i++) {
            cout << b[i] << " ";
        }
    else
        cout << 'N';

    return 0;
}
