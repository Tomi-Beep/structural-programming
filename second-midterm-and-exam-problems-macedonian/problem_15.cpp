#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int poramnet(int a) {
    if (a < 10) {
        if (a == 9)
            return 7;
        else
            return a;
    } else if (a % 10 == 9) {
        a = a - 2;
        return a % 10 + 10 * poramnet(a / 10);
    }
    return a % 10 + 10 * poramnet(a / 10);
}

void bubble_sort(int *a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int a, i = 0, rastechka[100];
    while (cin >> a) {
        rastechka[i] = poramnet(a);
        i++;
    }

    bubble_sort(rastechka, i);

    if (i > 5) {
        for (i = 0; i < 5; i++) {
            cout << rastechka[i] << " ";
        }
    } else {
        for (int j = 0; j < i; j++) {
            cout << rastechka[j] << " ";
        }
    }
    return 0;
}
