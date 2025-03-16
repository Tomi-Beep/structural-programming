#include <iostream>

using namespace std;

int main() {
    char znak1, znak2 = 'a';
    int zbir1 = 0, zbir2 = 0, zbir = 0;
    while (true) {
        cin >> noskipws >> znak1;
        if (znak1 == '!')
            break;
        if (znak1 >= '0' && znak1 <= '9' && znak2 >= '0' && znak2 <= '9') {
            zbir2 = (znak2 - '0') * 10 + (znak1 - '0');
            zbir = zbir - (znak2 - '0');
        } else if (znak1 >= '0' && znak1 <= '9')
            zbir1 += (znak1 - '0');
        znak2 = znak1;
        zbir += zbir1 + zbir2;
        zbir1 = zbir2 = 0;
    }
    cout << zbir << endl;
    return 0;
}
