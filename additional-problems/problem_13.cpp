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
    int zbir1 = 0;
    bool t = true;
    for (int i = 0; i < n; i++) {
        zbir1 += a[0][i];
    }
    for (int i = 0; i < n; i++) {
        int zbir2 = 0;
        for (int j = 0; j < n; j++) {
            zbir2 += a[i][j];
        }
        if ((zbir1 != zbir2)) {
            t = false;
        }
        break;
    }
    if (t) {
        for (int i = 0; i < n; i++) {
            int zbir2 = 0;
            for (int j = 0; j < n; j++) {
                zbir2 += a[j][i];
            }
            if ((zbir1 != zbir2)) {
                t = false;
            }
            break;
        }
    }
    if (t) {
        cout << "True"<<endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || i == n - 1 - j)
                    a[i][j] = zbir1;
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    } else { cout << "False"; }
    return 0;
}


