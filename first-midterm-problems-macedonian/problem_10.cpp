#include <iostream>

using namespace std;

int main() {
    int n;
    bool d = false, f = false;
    while (cin >> n) {
        if (n < 10)
            continue;
        int temp = n;
        int a, b;
        while (n > 9) {
            a = n % 10; //4
            b = (n / 10) % 10; //2
            if (d) {
                if (a > b) {
                    d = false;
                    break;
                }
            } else if (f) {
                if (a < b) {
                    f = false;
                    break;
                }
            }
            if (a > b || a < b) {
                if (a > b) {
                    d = true;
                    f = false;
                } else if (a < b) {
                    f = true;
                    d = false;
                }
            } else {
                d = false;
                f = false;
                break;
            }
            n /= 10;
        }
        if (n < 10) {
            cout << temp << endl;
            d = false;
            f = false;
        }
    }
    return 0;
}
