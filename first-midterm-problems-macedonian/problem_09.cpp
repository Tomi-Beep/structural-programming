#include <iostream>

using namespace std;

int main() {
    char broj;
    int sum = 0, flag = 1;
    while (flag) {
        cin >> broj;
        if (broj == '.') flag = 0;
        if (broj >= '0' && broj <= '9')
            sum += broj - '0';
        else if (broj >= 'A' && broj <= 'F')
            sum += 10 + broj - 'A';
        else if (broj >= 'a' && broj <= 'f')
            sum += 10 + broj - 'a';
    }
    if (sum % 16 == 0 && sum % 100 == 16)
        cout << "Poln pogodok";
    else if (sum % 16 == 0)
        cout << "Pogodok";
    else
        cout << sum;
}
