#include <iostream>

using namespace std;

int main() {
    int datum, glaven, n;
    cin >> glaven;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> datum;
        if (((glaven % 10000 - datum % 10000) * 365 + ((glaven / 10000) % 100 - (datum / 10000) % 100) * 30 +
             (glaven / 1000000 - datum / 1000000)) >= 6570)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
