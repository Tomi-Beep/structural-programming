#include <iostream>
#include <cstring>
#include <cmath>

float neprekinata_dropka(int a[], int n, int i) {
    if (n == 1)
        return (float)a[i];
    else if (i == n - 1) {
        return (float)a[i];
    }
    return (float)a[i] + 1 / (neprekinata_dropka(a, n, i + 1));
}

using namespace std;

int main() {
    int n, i = 0;
    cin >> n;
    int a[n];
    for (; i < n; i++) {
        cin >> a[i];
    }
    i = 0;
    cout << neprekinata_dropka(a, n, i);
    return 0;
}
