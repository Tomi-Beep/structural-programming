#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void premesti(int a[], int n) {
    int negativni[n], negativenbrojach = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            negativni[negativenbrojach] = a[i];
            negativenbrojach++;
            int temp1 = a[i];
            for (int j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            a[n - 1] = temp1;
            n--;
            i--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    for (int i = 0; i < negativenbrojach; i++) {
        cout << negativni[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    premesti(a, n);
    return 0;
}
