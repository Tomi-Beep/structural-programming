#include <iostream>

using namespace std;

int main() {
    int m, n, min = 0;
    bool p = 0;
    cin >> m >> n;
    while (m <= n) {
        int temp = m;
        while (temp > 0) {
            if ((temp % 10) % 2 != 0)
                break;
            temp /= 10;
        }
        if (temp < 10 && temp % 2 == 0) {
            if (min == 0) {
                min = m;
                p = 1;
            } else if (min > m) {
                min = m;
                p = 1;
            }
        }
        m++;
    }
    if (p)
        cout << min;
    else
        cout << "NE";
    return 0;
}
