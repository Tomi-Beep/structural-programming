#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool criteria(int a) {
    int x = a % 10;
    while (a > 9) {
        a /= 10;
    }
    return (x % 2 == 0) && (a % 2 != 0);
}

int main() {
    int n;
    bool t = false;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (criteria(a[i])) {
            cout << a[i] << endl;
            t = true;
        }
    }
    if (!t)
        cout << "No such elements!";
    return 0;
}
