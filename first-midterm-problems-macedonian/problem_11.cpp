#include <iostream>
using namespace std;

int main() {
    int n;
    bool t=0;
    while(cin>>n)
    {
        if(n<10)
            continue;
        int temp = n;
        int a,b;
        while(n>9)
        {
            a=n%10;
            b=(n/10)%10;
            if((a>=5&&b<5)||(a<5&&b>=5))
                t=1;
            else
                break;
            n/=10;
        }
        if(n<10)
            cout<<temp<<endl;
    }
    return 0;
}
