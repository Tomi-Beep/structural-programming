#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool palindrom(char a[], int n) {
    char b[n+1];
    for (int i = 0; i < n; i++) {
        b[i] = a[n - 1 - i];
    }
    b[n]='\0';
    return !strcmp(a, b);
}

bool imaspecial(char a[], int n) {
    bool t = false;
    for (int i = 0; i < n; i++) {
        if (!isalpha(a[i]))
            if (!isdigit(a[i])) {
                t = true;
                break;
            }
    }
    return t;
}

int main() {
    int n, max = 0;
    bool t = false;
    cin >> n;
    cin.ignore();
    char a[81], b[81];
    for (int i = 0; i < n; i++) {
        cin.getline(a, 81).skipws;
        if (palindrom(a, strlen(a))) {
            if (imaspecial(a, strlen(a))) {
                t = true;
                if (max == 0) {
                    max = strlen(a);
                    strcpy(b,a);
                } else if (max < strlen(a)) {
                    max = strlen(a);
                    strcpy(b,a);
                }
            }
        }
    }
    if(t){
        cout<<b;
    }
    else
        cout<<"Nema!";
    return 0;
}
