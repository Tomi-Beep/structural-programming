#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    char a[31];
    while (cin.getline(a, 31)) {
        bool t = true;
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'|| 
                a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
                if (tolower(a[i]) != tolower(a[strlen(a) - 1 - i]))
                    t = false;
            }
        }
        if (t)
            cout << a << endl;
    }
    return 0;
}
