#include <iostream>

using namespace std;

int main() {
    int n, x;
    int temp;
    cin >> n >> x;
    if (n>x)
        temp=x;
    else
        temp=n;
    bool t = 0;
    for (int i = n-1; i > 0; i--) {
        int N = i;
        int X = x;
        while (N > 0) {
            while (X > 0) {
                if (X % 10 == N % 10) {
                    t = 0;
                    break;
                } else
                    t = 1;
                X /= 10;
            }
            if (!t)
                break;
            N /= 10;
            X = x;
        }
        if (t) {
            cout << i;
            break;
        }
    }
    if(!t)
        cout<<0;
    return 0;
}
