#include <iostream>

using namespace std;

int main() {
    int a, b, counter = 0;
    cin >> a >> b;
    for (; a <= b; a++) {
        int temp = a;
        int middle = 0;
        int prv = 0;
        int vtor = 0;
        while (temp > 9) {
            if (temp == a) {
                prv = temp % 10;
                temp /= 10;
                continue;
            }
            middle = middle * 10 + temp % 10;
            temp /= 10;
        }
        if (middle == 0)
            continue;
        vtor += temp;
        if (middle % (prv + vtor) == 0) {
            counter++;
            cout << a << " -> " << "(" << middle << " == (" << prv << " + " << vtor << ") * " << middle / (prv + vtor)
                 << ")" << endl;
        }
    }
    cout << counter;
    return 0;
}
