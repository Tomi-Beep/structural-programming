#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int spojka(int a, int b) {
    int b_kopija = b;
    do {
        a *= 10;
        b_kopija /= 10;
    } while (b_kopija);
    return a + b;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        int counter = 0;
        for (int i = 0; i < n; i++) {
            if (a[i][j] == spojka(i, j))
                counter++;
        }
        cout << counter << endl;
    }
}
