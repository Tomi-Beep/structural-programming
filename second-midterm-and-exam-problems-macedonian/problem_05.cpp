#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int tip, tip1;
    float suma_na_uplata, proizvod = 1;
    float koeficient, najgolem_koeficient = 0;
    cin >> suma_na_uplata;
    char shifra[10], shifra1[10];
    while (cin >> shifra && shifra[0] != '#') {
        cin >> tip;
        cin >> koeficient;
        proizvod *= koeficient;
        if (najgolem_koeficient < koeficient) {
            tip1 = tip;
            strcpy(shifra1, shifra);
            najgolem_koeficient = koeficient;
        }
    }
    cout << shifra1 << " " << tip1 << " " << najgolem_koeficient << endl;
    cout << proizvod * suma_na_uplata;
    return 0;
}
