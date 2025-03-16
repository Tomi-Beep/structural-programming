#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

bool strong(int n) {
    int temp = n, zbir = 0;
    while (temp > 0) {
        zbir += factorial(temp % 10);
        temp /= 10;
    }
    return n == zbir;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Strong numbers: " << endl;
    for (int i = 0; i < n; i++) {
        if (strong(a[i]))
            cout << a[i] << endl;
    }
    
    return 0;

}
