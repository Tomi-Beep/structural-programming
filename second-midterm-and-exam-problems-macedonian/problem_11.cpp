#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    char a[101];
    int cifri = 0;
    while (cin.getline(a, 100) && a[0] != '#') {
        cifri = 0;
        for (int i = 0; i < strlen(a); i++) {
            if (isdigit(a[i]))
                cifri++;
        }
        cout<<cifri<<":";
        sort(a, a+ strlen(a));
        for (int i = 0; i < strlen(a); i++){
          if(isdigit(a[i]))
              cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
