#include <iostream>

using namespace std;

int main() {
    int a, b, counter = 2;
    bool t = 0;
    cin >> a >> b;
    int temp = a;
    if (a < b) {
        a = b;
        b = temp;
    }
    int cifri = 0;
    while (temp > 0) {
        cifri++;
        temp /= 10;
    }
    if (a <= 0 || b <= 0)
        cout << "Invalid input";
    else {
        for (int i = 1; i <= cifri; i++) {
            if (i % 2 == 0 && b != 0) {
                if (a % 10 == b % 10 && counter == i) {
                    t = 1;
                    b /= 10;
                    counter += 2;
                } else {
                    t = 0;
                }
            }
            a /= 10;
        }
        if (t)
            cout << "PAREN";
        else
            cout << "NE";
    }
    return 0;
}
