#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int Odd(int a[], int n) {
    if (n - 1 == 0) {
        if (a[0] % 2 != 0)
            return 1;
        else
            return 0;
    } else if (a[n - 1] % 2 != 0)
        return 1 + Odd(a, n - 1);
    else return 0 + Odd(a, n - 1);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << Odd(a, n);
    return 0;
}
