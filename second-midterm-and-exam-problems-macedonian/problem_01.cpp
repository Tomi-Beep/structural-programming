#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[100000], ch;
    bool t = false;
    int counter = 0;
    int k = 0;
    while ((k < 100000) && (ch = getchar()) != '#')
        a[k++] = ch;
    for (int i = 0; i < strlen(a) - 1; i++) {
        if (isupper(a[i])) {
            a[i] = tolower(a[i]);
        }
        if (isupper(a[i + 1])) {
            a[i + 1] = tolower(a[i + 1]);
        }
        if ((a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') &&
            (a[i + 1] == 'a' || a[i + 1] == 'e' || a[i + 1] == 'i' || a[i + 1] == 'o' || a[i + 1] == 'u')) {
            counter++;
            cout << a[i] << a[i + 1] << endl;
        }
    }
    cout << counter << endl;
    return 0;
}


