#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

int k, n, x, t;

int v(int a) {
    return a <= 0 ? 0 : a;
}

int f(int a) {
    int r = (n - a) * a;
    frn(i, a, n)
        r += n - a;
    return r;
}

int main() {
    cin >> k;
    while(k--) {
        cin >> n >> x >> t;
        cout << f(t / x) << '\n';
    }
}