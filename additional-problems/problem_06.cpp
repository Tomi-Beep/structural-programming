#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int par(int a[], int n) {
    int min = 0;
    for (int i = 0; i < n; i++) {
        int counter = 0;
        int broj = a[i];
        for (int j = 0; j < n; j++) {
            if (broj == a[j])
                counter++;
        }
        if (counter % 2 == 0 && (min > a[i] || min == 0))
            min = a[i];
    }
    return min;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (par(a, n)) {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << par(a, n);
    } else
        cout << "Nitu eden element ne se pojavuva paren broj pati!";
    return 0;
}
