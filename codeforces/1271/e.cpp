#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

ll n, k;

ll r(ll prev, ll num) {
    if(prev >= k)
        return num;
    if(num & 1)
        return r(2 * prev, num - 1);
    else {
        num /= 2;
        if((num & 1) || 2 * num + 1 > n)
            return r(prev + 1, num);
        else
            return r(3 * prev + 1, num);
    }
}

int main() {
    cin >> n >> k;
    cout << r(1, n);
}