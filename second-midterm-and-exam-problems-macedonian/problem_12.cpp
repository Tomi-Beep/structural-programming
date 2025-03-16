#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;


int BrojPozitivni(int a[], int n){
    if(n-1==0) {
        if (a[0]>=0)
            return 1;
        else
            return 0;
    }
    if(a[n-1]>=0){
        return 1 + BrojPozitivni(a,n-1);
    }
    else if(a[n-1]<0){
        return 0 + BrojPozitivni(a,n-1);
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>*(a+i);
    }
    cout<<BrojPozitivni(a,n);

    return 0;
}
