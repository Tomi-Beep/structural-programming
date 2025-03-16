#include <iostream>

using namespace std;

int main() {
    int z, a, b, counterz = 0, countermax = 0;
    cin >> z;
    while (cin >> a >> b) {
        if (a == 0 && b == 0)
            break;
        if (a + b == z)
            counterz++;
        countermax++;
    }
    cout << "Vnesovte " << counterz << " parovi od broevi chij zbir e " << z << endl;
    cout << "Procentot na parovi so zbir " << z << " e " << (float) counterz / countermax * 100 << "%";
    return 0;
}
