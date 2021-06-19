#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

ll n, k, m = 0;
vll v;

ll r(ll i) {
    if(i > n)
        return 0;
    if(v[i])
        return v[i];
    if(i % 2 == 0)
        v[i] = r(i + 1) + r(i * 2) + 1;
    else
        v[i] = r(i * 2) + 1;
    return v[i];
}

int main() {
    cin >> n >> k;
    v = vll(n + 1, 0);
    time_t start, end;
    time(&start);
    r(1);
    ll i = n;
    while(!m)
        if(v[i--] >= k)
            m = i + 1;
    time(&end);
    cout << m << ", sec: " << difftime(end, start);
}