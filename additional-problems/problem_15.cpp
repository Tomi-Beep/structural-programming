#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < 0) {
                int sum = 0;
                if (i - 1 >= 0)sum += a[i - 1][j];
                if (i + 1 < n)sum += a[i + 1][j];
                if (j - 1 >= 0)sum += a[i][j - 1];
                if (j + 1 < n)sum += a[i][j + 1];
                a[i][j] = sum;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


