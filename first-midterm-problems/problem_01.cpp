#include <iostream>

using namespace std;

int main() {
    int a, b, counter = 0;
    cin >> a >> b;
    for (a++; a < b; a++) {
        int temp = a;
        int middle = 1;
        int spojka = 0;
        while (temp > 9) {
            if (temp == a) {
                spojka = temp % 10;
                temp /= 10;
                continue;
            }
            middle *= temp % 10;
            temp /= 10;
        }
        if (middle == 0)
            continue;
        spojka += 10 * temp;
        if (middle % spojka == 0) {
            counter++;
            cout << a << " -> " << "(" << middle << " == " << spojka << " * " << middle / spojka << ")" << endl;
        }
    }
    cout << counter;
}
