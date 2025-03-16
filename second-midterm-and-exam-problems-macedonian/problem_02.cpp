#include <iostream>
#include <cstring>

using namespace std;

int najznachajna(int a[], int n) {
    int max = 0;
    int naj;
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        while (a[i] > 9) {
            a[i]/=10;
        }
        if(max<a[i]){
            max=a[i];
            naj=temp;
        }
    }
    return naj;
}

int main() {
    int n;
    int a[100];
    cin >> n;
    while (n != 0) {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << najznachajna(a,n)<<endl;
        cin >> n;
    }
    return 0;
}
