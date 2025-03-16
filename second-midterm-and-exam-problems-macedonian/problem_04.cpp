#include <iostream>
#include <cstring>

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
    int b, c;
    cin >> b >> c;

    int zbir = 0;
    //prv kvadrant
    for (int i = b - 1; i >= 0; i--) {
        for (int j = c; j < m; j++) {
            zbir += a[i][j];
        }
    }
    cout << zbir << " ";
    zbir = 0;
    for (int i = b - 1; i >= 0; i--) {
        for (int j = c - 1; j >= 0; j--) {
            zbir += a[i][j];
        }
    }
    cout << zbir << " ";
    zbir = 0;

    for (int i = b; i < n; i++) {
        for (int j = c - 1; j >= 0; j--) {
            zbir += a[i][j];
        }
    }
    cout << zbir << " ";
    zbir = 0;

    for (int i = b; i < n; i++) {
        for (int j = c; j < m; j++) {
            zbir += a[i][j];
        }
    }
    cout << zbir;
    return 0;
}
