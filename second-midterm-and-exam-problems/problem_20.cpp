#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n], b[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int elements = 0;
            if (i - 1 >= 0) if (a[i - 1][j] == 1) elements++;
            if (i + 1 < n) if (a[i + 1][j] == 1) elements++;
            if (j - 1 >= 0) if (a[i][j - 1] == 1) elements++;
            if (j + 1 < n) if (a[i][j + 1] == 1) elements++;
            if (elements >= 3)
                b[i][j] = 1;
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
