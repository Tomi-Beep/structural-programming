#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int abbreviate(int n, int k) {
    int temp = n, yuh = 0, counter = 0;
    while (temp > 9) {
        if (temp % 10 > k) {
            if (counter == 0) {
                yuh += temp % 10;
                counter++;
            } else {
                yuh += temp % 10 * 10 * counter;
                counter *= 10;
            }
        }
        temp /= 10;
    }
    if (temp > k) {
        if (counter == 0) {
            yuh += temp;
        } else {
            yuh += temp % 10 * 10 * counter;
        }
    }
    return yuh;
}

int maksimum(int *a, int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (max < a[i] || max == 0)
            max = a[i];
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        a[i] = abbreviate(a[i], k);
    }
    cout << maksimum(a, n);
    return 0;
}
