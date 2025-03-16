#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    char a[101];
    while (cin.getline(a, 100)) {
        for (int i = 0; i < strlen(a); i++) {
            if (isupper(a[i])) {
                a[i] = tolower(a[i]);
            }
            if (isalpha(a[i])) {
                a[i] = 'a' + (a[i] - 'a' + 3) % 26;
            }
        }
        cout << a << endl;
    }
    return 0;
}
