#include <iostream>
using namespace std;

void printNumbers(int start, int end) {
    if (start > end) {
        return;
    }

    cout << start;

    printNumbers(start + 1, end);
}

void printTriangle(int n) {
    if (n == 0) {
        return;
    }

    printTriangle(n - 1);

    printNumbers(1, n);

    cout << endl;
}

int main() {
    // Set the value of n
    int n;
    cin >> n;

    // Call the recursive function to print the triangle
    printTriangle(n);

    return 0;
}
