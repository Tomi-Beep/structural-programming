#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, m, edinici = 0, brojach;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        brojach = 3;
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                brojach--;
            } else if (brojach > 0 && a[i][j] == 0) {
                brojach = 3;
            }
        }
        if (brojach <= 0) {
            edinici++;
        }
    }
    for (int j = 0; j < m; j++) {
        brojach = 3;
        for (int i = 0; i < n; i++) {
            if (a[i][j] == 1) {
                brojach--;
            } else if (brojach > 0 && a[i][j] == 0) {
                brojach = 3;
            }
        }
        if (brojach <= 0) {
            edinici++;
        }
    }
    cout << edinici;
}
