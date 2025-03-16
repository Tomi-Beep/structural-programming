#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int promena(int *a, int n, int i) {
    if (i >= n - 1 - i)
        return 0;
    else {
        if (a[i] < a[n - 1 - i]) {
            a[i] = a[n - 1 - i] = max(a[i], a[n - 1 - i]);
            return 1 + promena(a, n, i + 1);
        } else if (a[i] >= a[n - 1 - i]) {
            a[i] = a[n - 1 - i] = max(a[i], a[n - 1 - i]);
            return 0 + promena(a, n, i + 1);
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << promena(a, n, 0) << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
