#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int counter = 0;
    char a[21];
    while (cin.getline(a, 21)) {
        bool t = false;
        for (int i = 0; i < strlen(a); i++) {
            if (islower(a[i]))
                a[i] = toupper(a[i]);
            if (!isdigit(a[i]) && !(a[i] >= 65 && a[i] <= 71)) {
                t = true;
                break;
            }
        }
        if (t || a[0] == '\0')
            continue;
        counter++;
        cout << a << endl;
    }
    cout << "Total: " << counter;
    return 0;
}
