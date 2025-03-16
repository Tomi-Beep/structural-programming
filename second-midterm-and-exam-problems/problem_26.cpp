#include <iostream>
#include <cstring>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
    char a[1000];
    float max = 0;
    int counter = 0, pozicija;
    while (cin.getline(a, 1000)) {
        float upper = 0, lower = 0;
        for (int i = 0; i < strlen(a); i++) {
            if (isupper(a[i]))
                upper++;
            if (islower(a[i]))
                lower++;
        }
        if (max == 0 || max < upper / lower) {
            max = upper / lower;
            pozicija = counter;
        }
        printf("%.2f", upper / lower);
        cout << " " << a << endl;
        counter++;
    }
    cout << pozicija;
    return 0;
}
