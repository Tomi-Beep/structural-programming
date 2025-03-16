#include <iostream>
#include <cstring>
#include <cstring>

using namespace std;

int main() {
    int n, y;
    cin>>n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    cin>>y;
    for(int i = 0; i<n; i++){
        int temp = a[i][i];
        a[i][i]=a[i][y];
        a[i][y]=temp;
        a[y][i]=temp;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
