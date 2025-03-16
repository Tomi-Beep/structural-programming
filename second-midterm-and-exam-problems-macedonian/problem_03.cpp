#include <iostream>
#include <cstring>

using namespace std;

int sum_pos(int *a, int ind, int n) {
    int zbir = 0;
    if (ind > n)
        return 0;
    else {
        for (int i = ind; i < n; i++) {
            zbir += *(a + i);
        }
        return zbir;
    }
}

int main() {
    int n, ind;
    cin >> n;
    int *a;
    a = new int;
    for (int i = 0; i < n; i++) {
        cin >> *(a + i);
    }

    cin >> ind;
    cout << sum_pos(a, ind, n);
    delete a;
    return 0;
}
