#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    int k;
    char a[1000];
    cin >> k;
    cin.ignore();
    cin.getline(a, 1000);
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
        a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
            for (int j = 0; j < k; j++){
                cout << a[i];
            }
        }
        else
            cout<<a[i];
           
    }
    return 0;
}
