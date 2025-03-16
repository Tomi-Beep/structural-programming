#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    char a[51], b[4] = "a1c";

    for (int i = 0; i < n; i++) {
        int counter = 0;
        cin.getline(a, 50);
        for (int j = 0; j < strlen(a); j++) {
            if (isupper(a[j])) {
                a[j] = tolower(a[j]);
            }
        }
        for (int j = 0; j < strlen(a); j++) {
            if (!strncmp(b, a + j, 3)) {
                counter++;
            }
        }
        if (counter >= 2) {
            cout << a << endl;
        }
    }
    return 0;
}
