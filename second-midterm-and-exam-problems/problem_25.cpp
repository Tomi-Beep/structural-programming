#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, counter = 0, pozicija = 0, max1 = 0, max2 = 0,
            brojche1 = 0, brojche2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] == a[j]) { counter++; }
        }
        if (max1 == 0 || max1 < counter) {
            max1 = counter;
            brojche1 = a[i];
            pozicija = i;
        }
        counter = 0;
    }
    max2 = max1;
    for (int i = pozicija + 1; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] == a[j]) { counter++; }
        }
        if (max2 == counter) {
            brojche2 = a[i];
            break;
        }
        counter = 0;
    }
    if (brojche1 > brojche2) {
        int temp = brojche1;
        brojche1 = brojche2;
        brojche2 = temp;
    }
    char b[brojche1][brojche2];
    for (int i = 0; i < brojche1; i++) {
        for (int j = 0; j < brojche2; j++) {
            b[i][j] = '*';
        }
    }
    for (int i = 0; i < brojche1; i++) {
        for (int j = 0; j < brojche2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
