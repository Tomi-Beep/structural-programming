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
    int mini, maxi;
    bool t = true;
    for (int i = 0; i < n; i++) {
        t = true;
        for (int j = 0; j < n; j++) {
            if (t) {
                mini = a[i][j];
                maxi = a[i][j];
                t = false;
            } else if (mini > a[i][j]) {
                mini = a[i][j];
            } else if (maxi < a[i][j]) {
                maxi = a[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
            if (mini == a[i][j]) {
                a[i][j]=0;
            } else if (maxi == a[i][j]) {
                a[i][j]=1;
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
