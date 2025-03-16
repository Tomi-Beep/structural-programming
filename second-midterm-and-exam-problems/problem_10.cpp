#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int counter = 0;
    char a[1001];
    while (cin.getline(a, 1000)) {
        counter = 0;
        for (int i = 0; i < strlen(a) - counter; i++) {
            if (!isalpha(a[i]) && !isspace(a[i])) {
                for (int j = i; j < strlen(a) - counter - 1; j++) {
                    char temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
                counter++;
                i--;
            }
        }
        for (int i = 0; i < strlen(a) - counter; i++) {
            if(isspace(a[i]))
                continue;
            while (!isspace(a[i]) && i < strlen(a) - counter) {
                cout << a[i];
                i++;
            }
            cout << endl;
        }
    }
    return 0;
}
