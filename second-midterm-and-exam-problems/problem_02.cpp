#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int count_digit(int n, int digit) {
    if (n < 10 && n == digit)
        return 1;
    else if (n < 10 && n != digit)
        return 0;
    else if (n % 10 == digit)
        return 1 + count_digit(n / 10, digit);
    else
        return 0 + count_digit(n / 10, digit);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        a[i] = count_digit(a[i], a[i] % 10);
        cout << a[i] << " ";
    }

    return 0;
}
