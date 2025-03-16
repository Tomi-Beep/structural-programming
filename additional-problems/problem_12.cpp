#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int counter = 0;
        for (int j = 0; j < m; j++) {
            if ((((i + j) % 2 == 0) && (a[i][j] % 2 == 0)) || (((i + j) % 2 != 0) && (a[i][j] % 2 != 0))) {
                counter++;
            }
        }
        cout << i << ": " << counter<<endl;
    }
    return 0;
}
