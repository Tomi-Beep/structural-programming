#include <iostream>

using namespace std;

int main() {
    int n, suma = 0, max = 0;
    while (cin >> n) {
        int temp = n;
        if (n < 0)
            continue;
        while (n > 0) {
            suma += n % 10;
            n /= 10;
        }
        if (max == 0) {
            cout << temp << ": " << suma << endl;
            suma = 0;
        } else {
            cout << temp << ": " << suma + max << endl;
            suma = 0;
        }
        max = 0;
        while (temp > 0) {
            if (max < temp % 10)
                max = temp % 10;
            temp /= 10;
        }
    }
    return 0;
}
