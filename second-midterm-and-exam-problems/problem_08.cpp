#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, min = 0, max = 0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                if (min == 0 || min > a[i][j])
                    min = a[i][j];
            } else if (i < j) {
                if (max == 0 || max < a[i][j])
                    max = a[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j)
                a[i][j] = min;
            else if (i < j)
                a[i][j] = max;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
