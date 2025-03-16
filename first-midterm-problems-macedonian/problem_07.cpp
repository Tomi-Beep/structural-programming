#include <iostream>

using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            if (j == 1 || j == m)
                cout << "%";
            else if (i == 1 || i == m)
                cout << "@";
            else
                cout << ".";
        }
        cout << endl;
    }
    return 0;
}
