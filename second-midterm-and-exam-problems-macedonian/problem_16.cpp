#include <iostream>

using namespace std;

int findMaxDigit(int num) {
    if (num == 0) {
        return 0; // Base case, no max digit found yet
    }

    int digit = num % 10;
    int remainingMax = findMaxDigit(num / 10);

    return max(digit, remainingMax);
}

int main() {
    int num;

    while (cin >> num) {
        int result = findMaxDigit(num);
        cout << result << endl;
    }

    return 0;
}
