#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    float max = 0;
    char a[101], b[101];
    while (cin.getline(a, 101)) {
        float digits = 0, letters = 0;
        for (int i = 0; i < strlen(a); i++) {
            if (isdigit(a[i])) {
                digits++;
            } else if (isalpha(a[i])) {
                letters++;
            }
        }
        if (letters != 0) {
            if (max == 0 || max <= digits / letters) {
                max = digits / letters;
                strcpy(b, a);
            }
        }

    }
    cout << b;
    return 0;
}
