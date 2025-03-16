#include <iostream>

using namespace std;

int main() {
    int n, max = 0, brojot;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int zbir = 0;
        for (int delitel = 1; delitel < i; delitel++) {
            if (i % delitel == 0)
                zbir += delitel;
        }
        if (max == 0) {
            max = zbir;
            brojot = i;
        } else if (max < zbir) {
            max = zbir;
            brojot = i;
        }
    }
    cout << brojot;
    return 0;
}
