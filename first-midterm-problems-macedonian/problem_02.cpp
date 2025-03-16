#include <iostream>

using namespace std;

int main() {
    int n, max = 0;
    cin >> n;
    if (n > 9) {
        for (int i = 9; i < n; i++) {
            int temp = 0;
            int broj = i; // broj e 90
            int cifri = 0;
            while (broj > 0) {
                temp = broj % 10 + temp * 10; //temp e 9
                broj /= 10; // broj stanuva 0
            }
            int za_cifri=i;
            while(za_cifri>0){
                cifri++;
                za_cifri /= 10;
            }
            if (temp % cifri == 0)
                if (max == 0)
                    max = i;
                else if (max < i)
                    max = i;
        }
        cout << max;
    } else
        cout << "Brojot ne e validen";
    return 0;
}
