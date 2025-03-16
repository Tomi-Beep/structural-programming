#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    char a[81];
    while (cin.getline(a, 81)) {
        int zbir1 = 0;
        int zbir2 = 0;
        int zbir = 0;
        bool t = false;
        int temp;
        for (int i = 0; i < strlen(a); i++) {
            if (isdigit(a[i]) && t) {
                zbir1--;
                zbir2 = zbir2 * 10 + (a[i] - '0');
                continue;
            } else if (isdigit(a[i]) && !t) {
                zbir1 = a[i] - '0';
                temp = zbir1;
                zbir2 = a[i] - '0';
                t = true;
                continue;
            }
            if (temp != zbir1)
                zbir1 = 0;
            else if (zbir2 < 10)
                zbir2 = 0;
            zbir = zbir + zbir1 + zbir2; //
            zbir1 = 0;
            zbir2 = 0;
            t = false;
            if (isalpha(a[i]))
                cout << a[i];
        }
        if (temp != zbir1)
            zbir1 = 0;
        else if (zbir2 < 10)
            zbir2 = 0;
        zbir = zbir + zbir1 + zbir2;
        cout << zbir << endl;
    }
    return 0;
}
