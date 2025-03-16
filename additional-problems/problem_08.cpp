#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int n, q, w, e, r;
    bool t1 = false, normalno1 = false, naopachki1 = false, t2 = false, naopachki2 = false, normalno2 = false;
    cin >> n;
    char a[n][n], b[11], c[11];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    cin.ignore();
    cin >> b;
    for (int i = 0; i < strlen(b); i++) {
        c[i] = b[strlen(b) - 1 - i];
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < strlen(b) && k < n; k++) {
                if (a[k + i][j] == b[k]) {
                    t1 = true;
                    normalno1 = true;
                    naopachki1 = false;
                } else if (a[k + i][j] == c[k]) {
                    t1 = true;
                    naopachki1 = true;
                    normalno1 = false;
                } else {
                    t1 = false;
                    naopachki1 = false;
                    normalno1 = false;
                    break;
                }
            }
            if (t1 && normalno1) {
                q = i;
                w = j;
                /*cout << i << ", " << j << " -> " << i + strlen(b) - 1 << ", " << j;*/
                break;
            } else if (t1 && naopachki1) {
                q = i;
                w = j;
                /*cout << i + strlen(b) - 1 << ", " << j << " -> " << i << ", " << j;*/
                break;
            }

        }
        if (t1)
            break;
    }
    for (int i = 0; i < n; i++) {
        int j, k;
        for (j = 0; j < n; j++) {
            for (k = 0; k < strlen(b) && k < n; k++) {
                if (a[i][k + j] == b[k]) {
                    t2 = true;
                    normalno2 = true;
                    naopachki2 = false;
                } else if (a[i][k + j] == c[k]) {
                    t2 = true;
                    naopachki2 = true;
                    normalno2 = false;
                } else {
                    t2 = false;
                    naopachki2 = false;
                    normalno2 = false;
                    break;
                }
            }
            if (t2 && normalno2) {
                e = i, r = j;
                /*cout << i << ", " << j << " -> " << i << ", " << j + strlen(b) - 1;*/
                break;
            } else if (t2 && naopachki2) {
                e = i, r = j;
                /*cout << i << ", " << j + strlen(b) - 1 << " -> " << i << ", " << j;*/
                break;
            }
        }
        if (t2)
            break;
    }
    if (q <= e) {
        if (t1 && normalno1) {
            cout << q << ", " << w << " -> " << q + strlen(b) - 1 << ", " << w;

        } else if (t1 && naopachki1) {
            cout << q + strlen(b) - 1 << ", " << w << " -> " << q << ", " << w;

        }
    } else if (q > e) {
        if (t2 && normalno2) {
            cout << e << ", " << r << " -> " << e << ", " << r + strlen(b) - 1;
        } else if (t2 && naopachki2) {
            cout << e << ", " << r + strlen(b) - 1 << " -> " << e << ", " << r;
        }
    }

    if (!t1 && !t2)
        cout << "Not Found" << endl;
    return 0;
}
