#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int x, y;
    cin >> x >> y;


    if (a[x][y] == 0) {
        a[x][y] = 1;
        for (int i = x - 1, j = y; i >= 0; i--) {
            if (a[i][j] == 1)
                break;
            a[i][j] = 1;
        }
        for (int i = x + 1, j = y; i < n; i++) {
            if (a[i][j] == 1)
                break;
            a[i][j] = 1;
        }
        for (int i = x, j = y - 1; j >= 0; j--) {
            if (a[i][j] == 1)
                break;
            a[i][j] = 1;
        }
        for (int i = x, j = y + 1; j < m; j++) {
            if (a[i][j] == 1)
                break;
            a[i][j] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
