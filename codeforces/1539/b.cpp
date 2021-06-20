#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

typedef vector<int> vi;

int n, q, l, r;
string s;
vi p;

int f() {
    int res = 0;
    frn(i, l - 1, r)
        res += s[i] - 'a' + 1;
    return res;
}

int main() {
    cin >> n >> q >> s;
    p = vi(n + 1, 0);
    frn(i, 0, n)
        p[i + 1] = p[i] + s[i] - 'a' + 1;
    while(q--) {
        cin >> l >> r;
        cout << (p[r] - p[l - 1]) << '\n';
    }
}