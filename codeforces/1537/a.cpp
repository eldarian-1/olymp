#include <iostream>
 using namespace std;
 
#define fr(a, b) for(int a = 0; a < b; ++a)
 
 int main() {
     int t, n, a, d;
     cin >> t;
     while(t--) {
        cin >> n;
        d = 0;
        int sum = 0, temp;
        fr(i, n) {
            cin >> temp;
            d += temp - 1;
        }
        if(d < 0)
            cout << 1;
        else
            cout << d;
        if(t)
            cout << " ";
     }
     return 0;
 }