#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[101], b[101];
    int najdolg = 0, cifri = 0, pochetna, posledna;
    while (cin.getline(a, 100) && a[0] != 0) {
        cifri = 0;
        for (int i = 0; i < strlen(a); i++) {
            if (isdigit(a[i])) {
                cifri++;
            }
        }
        if (cifri >= 2) {
            if (najdolg == 0) {
                najdolg = strlen(a);
                strcpy(b, a);
            } else if (najdolg <= strlen(a)) {
                najdolg = strlen(a);
                strcpy(b, a);
            }
        }
    }
    for (int i = 0; i < strlen(b); i++) {
        if (isdigit(b[i])) {
            pochetna = i;
            break;
        }
    }
    for (int i = (strlen(b) - 1); i >= 0; i--) {
        if (isdigit(b[i])) {
            posledna = i;
            break;
        }
    }

    for (int i = pochetna; i <= posledna; i++) {
        cout << b[i];
    }
    return 0;
}
