#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(ll a = b; a < c; ++a)

typedef long long ll;

ll a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;
    frn(i, -100, 101)
        if(a * i * i * i + b * i * i + c * i + d == 0)
             cout << i << ' ';
}