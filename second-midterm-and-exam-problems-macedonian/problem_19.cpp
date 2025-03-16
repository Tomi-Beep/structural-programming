#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void transformacija(char *a, int n, int x) {
    if (n - 1 == 0) {
        if(isalpha(a[0])){
            char base = islower(a[n - 1]) ? 'a' : 'A';
        a[n - 1] = base + (a[n - 1] - base + x) % 26;}
    } else{
        if(isalpha(a[n-1])){
            char base = islower(a[n - 1]) ? 'a' : 'A';
            a[n - 1] = base + (a[n - 1] - base + x) % 26;
        }
        transformacija(a, n - 1, x);
    }
}

int main() {
    int n, x;
    cin >> n >> x;
    cin.ignore();
    char a[81];
    for (int i = 0; i < n; i++) {
        cin.getline(a, 80);
        transformacija(a, strlen(a), x);
        cout<<a<<endl;
    }
    return 0;
}
