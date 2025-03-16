#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int parcom(int a) {
    if (a < 10) {
        if ((a % 10) % 2 == 0) {
            return a + 1;
        } else
            return a - 1;
    } else if ((a % 10) % 2 == 0) {
        return a % 10 + 1 + 10 * parcom(a / 10);
    } else
        return a % 10 - 1 + 10 * parcom(a / 10);
}

void bubble_sort(int *a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n, a[100], counter = 0;
    while (cin >> n) {
        a[counter] = parcom(n);
        counter++;
    }
    bubble_sort(a, counter);
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
