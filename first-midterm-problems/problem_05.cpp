#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (a < c) {
            int temp = a;
            a = c;
            c = temp;
        }
        if (b < c) {
            int temp = b;
            b = c;
            c = temp;
        }
        int min = a - b, parnik1 = a, parnik2 = b;
        bool ednakvi = false;
        if (min > a - c) {
            min = a - c;
            parnik2 = c;
        } else if (min > b - c) {
            parnik1 = b;
            parnik2 = c;
            min = b - c;
        }
        if ((a - b) == (a - c) || (a - b) == (b - c) || (a - c) == (b - c))
            ednakvi = true;
        if(a==b||b==c||a==c)
            ednakvi = false;
        if (!ednakvi)
            cout << parnik2 << " " << parnik1 << endl;
        else
            cout << c << " " << b << " " << a << endl;
    }
    return 0;
}
