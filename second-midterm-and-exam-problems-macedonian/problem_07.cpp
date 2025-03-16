#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m, brojot;
    float sredina;
    cin >> n >> m;
    int a[n][m], b[m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        float zbir = 0;
        float max = 0;
        for (int j = 0; j < m; j++) {
            zbir += (float) a[i][j];
        }
        sredina = zbir / (float) m;
        for (int j = 0; j < m; j++) {
            if (max == 0) {
                max = abs(((float) a[i][j] - sredina));
                brojot = a[i][j];
            } else if (max < abs(((float) a[i][j] - sredina))) {
                max = abs(a[i][j] - sredina);
                brojot = a[i][j];
            }
        }
        b[i] = brojot;
    }
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }

    return 0;
}
