#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, m, min = 0, kolona;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        int zbir = 0;
        for (int j = 0; j < n; j++) {
            zbir += a[j][i];
        }
        if (min > zbir || min == 0){
            min = zbir;
            kolona = i;
        }
    }
    cout << kolona;

    return 0;
}
