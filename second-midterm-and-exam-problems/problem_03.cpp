#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        int temp1 = a;
        int temp2 = b;
        int counter1 = 1, counter2 = 0, counter3 = 0;
        while (temp1) {
            if (counter1 % 2 == 0 && temp1 % 10 == c) {
                counter2++;
            }
            temp1 /= 10;
            counter1++;
        }
        counter1 = 1;
        while (temp2) {
            if (counter1 % 2 == 0 && temp2 % 10 == c) {
                counter3++;
            }
            temp2 /= 10;
            counter1++;
        }
        if (counter2 >= counter3)
            cout << a << endl;
        else
            cout << b << endl;
    }

    return 0;
}
