#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    char z1, z2;
    int pochetok, kraj;
    cin >> z1 >> z2;
    cin.ignore();
    char a[81];
    while (cin.getline(a, 80) && a[0] != '#') {
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] == z1) {
                pochetok = i;
            } else if (a[i] == z2) {
                kraj = i;
                break;
            }
        }
        for (int i = pochetok + 1; i < kraj; i++) {
            cout << a[i];
        }
        cout<<endl;
    }
    return 0;
}
