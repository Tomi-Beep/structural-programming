#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n * 2], b[n * 2][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n * 2; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[i][j];
        }
    }

    for (int i = n - 1; i < n * 2; i++) {
        for (int j = n - 1; j < n * 2; j++) {
            b[i + 1][j - (n - 1)] = a[i - (n - 1)][j + 1];
        }
    }

    for (int i = 0; i < n * 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
