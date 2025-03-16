#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool kvadrat(int n) {
    int root = sqrt(n);
    return root * root == n;
}

int main() {
    int n, x;
    cin >> n;
    x = 1;
    for (; !kvadrat(x) || x < n; x++);
    x = sqrt(x);
    int a[x][x];
    int b = 1;
    int j = 0;
    for (int i = 0; i < x; i++) {
        if (i % 2 == 0) {
            for (j = 0; j < x && b <= n; j++, b++) {
                a[j][i] = b;
            }
            for (; j < x; j++) {
                a[j][i] = 0;
            }
        } else {
            for (j = x - 1; j >= 0 && b <= n; j--, b++) {
                a[j][i] = b;
            }
            for (; j >= 0; j--) {
                a[j][i] = 0;
            }
        }
    }
    for (int i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
