#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int svrznici(char a[]) {
    int counter1 = 0, counter2 = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (isalnum(a[i])) {
            counter1++;
        } else {
            if (counter1 <= 3 && isalnum(a[i - 1])) {
                counter2++;
            }
            counter1 = 0;
        }
    }
    return counter2;
}

int main() {
    char a[101], b[101];
    int max = 0;
    while (cin.getline(a, 100)) {
        if (max == 0 || max < svrznici(a)) {
            max = svrznici(a);
            strcpy(b, a);
        }
    }
    cout << max << ": " << b;
}
