#include <iostream>
#include <cstring>
#include <cstring>

using namespace std;

int main() {
    int n, y;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int mini;
    bool t=false;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++)
                if (!t) {
                    mini = a[i][0];
                    t=true;
                } else if (mini > a[i][j])
                    mini = a[i][j];
        } else {
            for (int j = 0; j < n; j++)
                a[i][j] += mini;
            t=false;
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
