#include <iostream>
#include <vector>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

typedef long long ll;
typedef vector<ll> vll;

ll n, k;
vll v;

ll f(ll n) {
    if(n == 0)
        return 1;
    if(n < 0)
        return 0;
    if(v[n - 1])
        return v[n - 1];
    ll r = 0;
    frn(i, 1, k + 1)
        r += f(n - i);
    return v[n - 1] = r;
}

int main() {
    cin >> k >> n;
    v = vll(n, 0);
    cout << f(n);
    return 0;
}