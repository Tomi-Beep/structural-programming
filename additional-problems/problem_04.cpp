#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, m, r, k, min;
    bool t = true;
    cin >> n >> m;
    cin >> r >> k;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (t) {
                min = a[i][j];
                t = false;
            } else if (min > a[i][j]) {
                min = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < r && j < k)
                a[i][j] = min;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
