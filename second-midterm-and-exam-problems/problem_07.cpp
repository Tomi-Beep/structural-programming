#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void transformation(int *a, int n) {
    for (int i = 0; i + 1 < n; i++) {
        if (a[i] == a[i + 1]) {
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }
}

void podreduvanje(int *a, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            for (int j = i; j + 1 < n; j++) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            i--;
            n--;
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
    transformation(a, n);
    podreduvanje(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
