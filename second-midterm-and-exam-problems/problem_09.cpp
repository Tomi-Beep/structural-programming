#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, counter = 0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }

    for (int i = 0; i < n; i++) {
        while (a[i][i] != 0 && i < n) {
            a[i][i] = 0;
            i++;
            counter++;
        }
    }
    for (int i = 0; i < n; i++) {
        int j = 0;
        for (j = 0; j < n; j++) {
            while (a[i][j] != a[j][i] && j < n) {
                a[i][j] = a[j][i];
                counter++;
                j++;
            }
        }
    }
    cout << counter;
    return 0;
}
