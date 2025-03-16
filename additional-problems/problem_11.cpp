#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void transformacija(int *a, int n) {
    int b[n];
    for (int i = 0; i < n; i++) {
        b[i] = 0;
    }
    if (a[0] > 0) {
        int temp = a[0];
        for (int i = 0; i < n; i++) {
            if (i + temp >= n)
                break;
            b[i + temp] = a[i];
        }
    } else if (a[0] < 0) {
        int temp = a[0];
        for (int i = 0; i < n; i++) {
            if (n - 1 - i + temp < 0)
                break;
            b[n - 1 - i + temp] = a[n - 1 - i];
        }
    }
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

int main() {
    int m, n, counter = 0;
    cin >> m;
    for (int k = 0; k < m; k++) {
        bool t = true;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        transformacija(a, n);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                t = false;
                break;
            }
        }
        if (t)
            counter++;
    }
    cout << counter;
    return 0;
}
