#include <iostream>

using namespace std;

int main() {
    int n;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    while (cin >> n) {
        int max = -1;
        int temp;
        for (int i = 0; n > 0; i++, n /= 10)
            if (max < n % 10) {
                max = n % 10;
                temp = i;
            }
        switch (temp) {
            case 0:
                a++;
                break;
            case 1:
                b++;
                break;
            case 2:
                c++;
                break;
            case 3:
                d++;
                break;
            case 4:
                e++;
                break;
        }
    }
    cout << "0: " << a << endl;
    cout << "1: " << b << endl;
    cout << "2: " << c << endl;
    cout << "3: " << d << endl;
    cout << "4: " << e << endl;
    return 0;
}
